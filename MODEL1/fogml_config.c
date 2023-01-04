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

#include "fogml_config.h"

//BLOCK 1 - BASE
tinyml_block_base_config_t block1_config;
tinyml_dsp_block_t block1 = {
    .type = TINYML_DSP_BASE,
    .config = &block1_config

};

//BLOCK 2 - ENERGY
tinyml_block_energy_config_t block2_config;
tinyml_dsp_block_t block2 = {
    .type = TINYML_DSP_ENERGY,
    .config = &block2_config
};

//BLOCK 3 - CROSSINGS
tinyml_block_crossings_config_t block3_config = {
    .threshold = 0.00001
};
tinyml_dsp_block_t block3 = {
    .type = TINYML_DSP_CROSSINGS,
    .config = &block3_config
};

//DSP config
tinyml_dsp_block_t *blocks_tab[] = {&block1, &block2, &block3};

tinyml_dsp_config_t my_dsp_config = {
    .time_ticks = FOGML_TIME_TICKS,
    .axis_n = FOGML_AXIS,
    .blocks_num = 3,
    .blocks = blocks_tab
};

const char* FOGML_LABELS[] = {"IDLE","CIRCLE","SNAKE"};
const int FOGML_LABELS_COUNT = 3;
const int FOGML_MODEL_VERSION = 1;

float vector_cache[FOGML_VECTOR_SIZE];

bool fogml_verbose_mode = false;

float fogml_anomaly_detector(float *time_series_data) {
    //float *vector = (float*)malloc(sizeof(float) * FOGML_VECTOR_SIZE);
    float *vector = vector_cache;
    tinyml_dsp(time_series_data, vector, &my_dsp_config);
    float anomaly_sc;

    min_max_scaler(vector, &min_max_scaler_config);

    anomaly_sc = anomaly_score(vector, &kmeans_anomaly_config);

    if (fogml_verbose_mode) {
        fogml_printf("Anomaly score = ");
        fogml_printf_float(anomaly_sc);
        fogml_printf("\n");
    }

    //free(vector);

    return anomaly_sc;
}

int fogml_classification(float *time_series_data) {
    //float *vector = (float*)malloc(sizeof(float) * FOGML_VECTOR_SIZE);
    float *vector = vector_cache;
    tinyml_dsp(time_series_data, vector, &my_dsp_config);
    int cl;

    cl = classifier(vector);

    if (fogml_verbose_mode) {
        fogml_printf("Detected  class = ");
        fogml_printf_int(cl);
        fogml_printf("\n");
    }

    //free(vector);

    return cl;
} 

void fogml_verbose_set(bool state) {
    fogml_verbose_mode = state;
}