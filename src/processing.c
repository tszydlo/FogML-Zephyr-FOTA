#include <drivers/sensor.h>
#include <logging/log.h>
#include <zephyr.h>

#include <avsystem/commons/avs_defs.h>
#include <avsystem/commons/avs_list.h>
#include <avsystem/commons/avs_memory.h>

#include "processing.h"
//#include "led.h"

LOG_MODULE_REGISTER(processing);

volatile atomic_bool processing_initialized;
volatile atomic_bool fogml_verbose;

#define ACCELEROMETER_NODE DT_INST(0, adi_adxl362)

#if !DT_NODE_HAS_STATUS(ACCELEROMETER_NODE, okay)
#    error "ADXL362 not available"
#endif // !DT_NODE_HAS_STATUS(ACCELEROMETER_NODE, okay)

#define SENSOR_CHANNEL SENSOR_CHAN_ACCEL_XYZ
#define CH_COUNT 3

static struct k_work_delayable measure_accel_dwork;
static struct k_work_sync measure_accel_dwork_sync;
static const struct device *dev;
int64_t last_run_timestamp;

#ifdef ANOMALY_ANALYZER
static size_t next_sample_no;
#endif

static float *inference_data;
static float *class_values;

static void schedule_next_measure() {
    const int64_t next_run_timestamp =
            last_run_timestamp + 1000 / FOGML_HZ;
    const int64_t curr_time = k_uptime_get();
    k_timeout_t next_run_delay;

    if (next_run_timestamp <= curr_time) {
        LOG_DBG("FogML processing timer has slipped");

        next_run_delay = K_NO_WAIT;
        last_run_timestamp = curr_time;
    } else {
        next_run_delay = K_MSEC(next_run_timestamp - curr_time);
        last_run_timestamp = next_run_timestamp;
    }

    k_work_schedule(&measure_accel_dwork, next_run_delay);
}

static void process_fogml_results() {
    float anomaly_score;
    int detected_class = -1;

    if (FOGML_HAS_ANOMALY_DETECTION) {
        anomaly_score = fogml_anomaly_detector(inference_data);
    }

    detected_class = fogml_classification(inference_data);

    for(int index = 0; index < FOGML_LABELS_COUNT; index++){
        class_values[index] = 0.0;
    }

    class_values[detected_class] = 1.0;

    LOG_INF("Detected class: %d\tLabel: %s", detected_class, FOGML_LABELS[detected_class]);

    //led_on(detected_class + 1);

    if (FOGML_HAS_ANOMALY_DETECTION) {
        LOG_INF("Anomaly score: %.2f", anomaly_score);
    }

    // 33650 Pattern detector
    assert(detected_class > -1);
    update_pattern_detector(detected_class);

    // TODO - FogML does not support it yet.
    // 33652 Classifier
    //update_classifier_object(class_values, anomaly_score);

    #ifdef ANOMALY_ANALYZER
    // 33653 Anomaly Analyzer
    update_anomaly_analyzer(anomaly_score, inference_data);
    #endif

    // 33651 Anomaly detector
    if (FOGML_HAS_ANOMALY_DETECTION) {
        update_anomaly_detector(anomaly_score);
    }

    last_run_timestamp = k_uptime_get();
    schedule_next_measure();
}

static void measure_accel_handler(struct k_work *work) {
    assert(FOGML_AXIS == CH_COUNT);

    struct sensor_value values[CH_COUNT];
    if (sensor_sample_fetch_chan(dev, SENSOR_CHANNEL)
            || sensor_channel_get(dev, SENSOR_CHANNEL, values)) {
        LOG_ERR("Failed to fetch accelerometer data");
        return;
    }

    for (size_t i = 0; i < CH_COUNT; i++) {
        inference_data[next_sample_no * CH_COUNT + i] =
            (float)sensor_value_to_double(&values[i]);
    }

    if (++next_sample_no == (FOGML_TIME_TICKS)) {
        next_sample_no = 0;

        //FogML Processing
        process_fogml_results();
    } else {
        schedule_next_measure();
    }   
}

void process_sensor_data() {
    atomic_store(&processing_initialized, true);
    LOG_INF("Process Sensor Data");
    dev = DEVICE_DT_GET(ACCELEROMETER_NODE);
    if (!device_is_ready(dev)) {
        LOG_ERR("Failed to access ADXL362");
        return;
    }

    inference_data = (float *)avs_calloc(
        1,
        FOGML_AXIS * FOGML_TIME_TICKS * sizeof(float));
    next_sample_no = 0;

    class_values = (float *)avs_calloc(
        1,
        FOGML_LABELS_COUNT * sizeof(float));


    LOG_INF("FogML initialized.");
    LOG_INF("TIME TICKS: %d", FOGML_TIME_TICKS);
    LOG_INF("AXIS: %d", FOGML_AXIS);
    LOG_INF("FREQUENCY: %d", FOGML_HZ);
    LOG_INF("LABELS: %d", FOGML_LABELS_COUNT);

    k_work_init_delayable(&measure_accel_dwork, measure_accel_handler);
    last_run_timestamp = k_uptime_get();
    schedule_next_measure();
}

void stop_processing(void) {
    k_work_cancel_delayable_sync(&measure_accel_dwork, &measure_accel_dwork_sync);

    avs_free(inference_data);
    avs_free(class_values);
    
    atomic_store(&processing_initialized, false);
}
