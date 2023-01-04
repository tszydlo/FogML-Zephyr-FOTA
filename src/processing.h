#ifndef PROCESSING
#define PROCESSING

#include <stdatomic.h>

#if MODEL==MODEL1
#include "../MODEL1/fogml_config.h"
#elif MODEL==MODEL2
#include "../MODEL2/fogml_config.h"
#elif MODEL==MODEL3
#include "../MODEL2/fogml_config.h"
#elif MODEL==MODEL4
#include "../MODEL2/fogml_config.h"
#endif

extern volatile atomic_bool fogml_verbose;
extern volatile atomic_bool processing_initialized;

//If defined then Anomaly Analyzer object will be created and installed.
#define ANOMALY_ANALYZER

//EI Sensor Data Processing
void process_sensor_data();
void stop_processing(void);

//TinyML objects update functions
void update_anomaly_detector(float anomaly_score);
void update_classifier_object(float *class_value, float anomaly_score);
void update_pattern_detector(int detected_class);
void update_anomaly_analyzer(float anomaly_score, float* sensor_data);

#endif // PROCESSING
