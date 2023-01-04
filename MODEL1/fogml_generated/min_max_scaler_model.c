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

#include "../../src/fogml_sdk/scaler/fogml_scaler.h"

float mins_tab[] = {0.680000, -6.170000, 0.750000, -8.670000, 0.760000, -9.610000, 0.750000, 0.650000, 0.680000, 1.000000, 1.000000, 1.000000};
float maxs_tab[] = {10.590000, 7.930000, 13.180000, 9.940000, 11.460000, 7.780000, 299.030000, 339.680000, 303.080000, 9.000000, 8.000000, 9.000000};

fogml_min_max_scaler_config_t min_max_scaler_config = {
    .vector_size = 12,
    .mins = mins_tab,
    .maxs = maxs_tab
};