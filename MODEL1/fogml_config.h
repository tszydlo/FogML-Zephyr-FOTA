/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef FOGML_CONFIG_H
#define FOGML_CONFIG_H

#include "../src/fogml_sdk/fogml.h"

#define FOGML_VERBOSE

//FogML Blocks
#define FOGML_HAS_DSP               true
#define FOGML_HAS_CLASSIFICATION    true
#define FOGML_HAS_ANOMALY_DETECTION true

// DATA ACQUISITION
// accelerometer data X, Y, Z
#define FOGML_TIME_TICKS  20
#define FOGML_AXIS  3
#define FOGML_HZ 10


// DIGITAL SIGNAL PROCESSING
// number of features - depends on the DSP blocks
#define FOGML_VECTOR_SIZE ((TINYML_DSP_BASE_LEN + TINYML_DSP_ENERGY_LEN + TINYML_DSP_CROSSINGS_LEN) * FOGML_AXIS)

//DSP config
extern tinyml_dsp_config_t my_dsp_config;

//CLASSIFICATION
extern const char* FOGML_LABELS[];
extern const int FOGML_LABELS_COUNT;
extern const int FOGML_MODEL_VERSION;

int fogml_classification(float *time_series_data);

//ANOMALY DETECTION
extern fogml_anomaly_config_t kmeans_anomaly_config;
extern fogml_min_max_scaler_config_t min_max_scaler_config;

float fogml_anomaly_detector(float *time_series_data);

//VERBOSE
void fogml_verbose_set(bool state);

#endif