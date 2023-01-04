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

int classifier(float * x){
  int results[100];
  if (x[9] <= 3.5000000000) {
    if (x[2] <= 6.2500000000) {
      results[0] = 0;
    }
    else {
      results[0] = 1;
    }
  }
  else {
    if (x[1] <= 0.0950000025) {
      results[0] = 2;
    }
    else {
      if (x[0] <= 5.1799999475) {
        results[0] = 0;
      }
      else {
        results[0] = 2;
      }
    }
  }
  if (x[3] <= 7.4500000477) {
    if (x[0] <= 6.4650001526) {
      results[1] = 0;
    }
    else {
      if (x[1] <= -1.2999999821) {
        results[1] = 0;
      }
      else {
        results[1] = 2;
      }
    }
  }
  else {
    results[1] = 1;
  }
  if (x[7] <= 131.3400039673) {
    if (x[5] <= -8.7449998856) {
      if (x[5] <= -9.4749999046) {
        results[2] = 0;
      }
      else {
        results[2] = 2;
      }
    }
    else {
      results[2] = 0;
    }
  }
  else {
    if (x[3] <= 3.2650001049) {
      results[2] = 0;
    }
    else {
      results[2] = 1;
    }
  }
  if (x[5] <= -2.7450000644) {
    if (x[8] <= 4.1700000763) {
      if (x[6] <= 58.1399993896) {
        results[3] = 0;
      }
      else {
        results[3] = 2;
      }
    }
    else {
      results[3] = 0;
    }
  }
  else {
    if (x[0] <= 5.6399998665) {
      results[3] = 0;
    }
    else {
      results[3] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 5.4900000095) {
      if (x[6] <= 102.6250000000) {
        results[4] = 0;
      }
      else {
        results[4] = 2;
      }
    }
    else {
      results[4] = 0;
    }
  }
  else {
    results[4] = 1;
  }
  if (x[7] <= 119.9600028992) {
    if (x[5] <= -8.6849999428) {
      if (x[8] <= 4.3350000381) {
        results[5] = 2;
      }
      else {
        results[5] = 0;
      }
    }
    else {
      results[5] = 0;
    }
  }
  else {
    if (x[9] <= 3.5000000000) {
      results[5] = 1;
    }
    else {
      results[5] = 0;
    }
  }
  if (x[7] <= 150.4899978638) {
    if (x[10] <= 3.5000000000) {
      if (x[6] <= 114.9650001526) {
        results[6] = 0;
      }
      else {
        results[6] = 2;
      }
    }
    else {
      if (x[9] <= 4.5000000000) {
        results[6] = 0;
      }
      else {
        results[6] = 2;
      }
    }
  }
  else {
    if (x[8] <= 41.9700012207) {
      if (x[0] <= 4.7100000381) {
        results[6] = 0;
      }
      else {
        results[6] = 1;
      }
    }
    else {
      results[6] = 0;
    }
  }
  if (x[3] <= 6.4550001621) {
    if (x[9] <= 6.5000000000) {
      if (x[4] <= 0.9799999893) {
        results[7] = 2;
      }
      else {
        results[7] = 0;
      }
    }
    else {
      if (x[2] <= 1.2149999738) {
        results[7] = 2;
      }
      else {
        results[7] = 2;
      }
    }
  }
  else {
    if (x[7] <= 71.3100032806) {
      results[7] = 0;
    }
    else {
      results[7] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[6] <= 99.8100013733) {
      results[8] = 0;
    }
    else {
      if (x[10] <= 1.5000000000) {
        results[8] = 0;
      }
      else {
        results[8] = 1;
      }
    }
  }
  else {
    if (x[8] <= 5.6949999332) {
      results[8] = 2;
    }
    else {
      results[8] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    results[9] = 0;
  }
  else {
    if (x[7] <= 70.7600030899) {
      results[9] = 2;
    }
    else {
      results[9] = 1;
    }
  }
  if (x[3] <= 6.7400000095) {
    if (x[7] <= 7.9199998379) {
      if (x[7] <= 2.1299999356) {
        results[10] = 0;
      }
      else {
        results[10] = 2;
      }
    }
    else {
      if (x[4] <= 1.9400000572) {
        results[10] = 2;
      }
      else {
        results[10] = 0;
      }
    }
  }
  else {
    results[10] = 1;
  }
  if (x[5] <= -2.9150000811) {
    if (x[5] <= -9.1000003815) {
      if (x[5] <= -9.4749999046) {
        results[11] = 0;
      }
      else {
        results[11] = 2;
      }
    }
    else {
      results[11] = 0;
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[11] = 0;
    }
    else {
      results[11] = 1;
    }
  }
  if (x[5] <= -8.9899997711) {
    if (x[0] <= 4.3500001431) {
      results[12] = 0;
    }
    else {
      results[12] = 2;
    }
  }
  else {
    if (x[5] <= -2.1500000358) {
      results[12] = 0;
    }
    else {
      if (x[4] <= 6.8399999142) {
        results[12] = 1;
      }
      else {
        results[12] = 0;
      }
    }
  }
  if (x[7] <= 119.9600028992) {
    if (x[5] <= -9.0700001717) {
      if (x[6] <= 61.5349993706) {
        results[13] = 0;
      }
      else {
        results[13] = 2;
      }
    }
    else {
      results[13] = 0;
    }
  }
  else {
    results[13] = 1;
  }
  if (x[6] <= 115.8800010681) {
    results[14] = 0;
  }
  else {
    if (x[5] <= -4.5049999952) {
      if (x[4] <= 4.6499999762) {
        results[14] = 2;
      }
      else {
        results[14] = 0;
      }
    }
    else {
      results[14] = 1;
    }
  }
  if (x[0] <= 7.2699999809) {
    if (x[8] <= 1.4950000048) {
      results[15] = 2;
    }
    else {
      results[15] = 0;
    }
  }
  else {
    if (x[8] <= 5.8599998951) {
      results[15] = 2;
    }
    else {
      results[15] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    results[16] = 0;
  }
  else {
    if (x[4] <= 1.4849999547) {
      results[16] = 2;
    }
    else {
      results[16] = 1;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[0] <= 5.6650002003) {
      results[17] = 0;
    }
    else {
      if (x[5] <= -8.7449998856) {
        results[17] = 2;
      }
      else {
        results[17] = 0;
      }
    }
  }
  else {
    if (x[9] <= 3.5000000000) {
      results[17] = 1;
    }
    else {
      results[17] = 0;
    }
  }
  if (x[5] <= -9.1100001335) {
    if (x[6] <= 58.1399993896) {
      results[18] = 0;
    }
    else {
      results[18] = 2;
    }
  }
  else {
    if (x[8] <= 31.3000011444) {
      if (x[1] <= 0.1799999969) {
        results[18] = 1;
      }
      else {
        results[18] = 0;
      }
    }
    else {
      if (x[11] <= 3.0000000000) {
        results[18] = 0;
      }
      else {
        results[18] = 1;
      }
    }
  }
  if (x[8] <= 4.3350000381) {
    if (x[7] <= 18.0600004196) {
      if (x[0] <= 3.5950001180) {
        results[19] = 0;
      }
      else {
        results[19] = 2;
      }
    }
    else {
      results[19] = 0;
    }
  }
  else {
    if (x[7] <= 136.5149993896) {
      results[19] = 0;
    }
    else {
      if (x[3] <= 3.4100001007) {
        results[19] = 0;
      }
      else {
        results[19] = 1;
      }
    }
  }
  if (x[2] <= 7.8650000095) {
    if (x[0] <= 5.8050000668) {
      results[20] = 0;
    }
    else {
      if (x[5] <= -7.9750001431) {
        results[20] = 2;
      }
      else {
        results[20] = 0;
      }
    }
  }
  else {
    if (x[1] <= 0.1799999969) {
      results[20] = 1;
    }
    else {
      results[20] = 0;
    }
  }
  if (x[3] <= 5.8650000095) {
    if (x[10] <= 2.5000000000) {
      results[21] = 0;
    }
    else {
      if (x[4] <= 1.5799999833) {
        results[21] = 2;
      }
      else {
        results[21] = 0;
      }
    }
  }
  else {
    if (x[4] <= 7.0249998569) {
      results[21] = 1;
    }
    else {
      results[21] = 0;
    }
  }
  if (x[2] <= 7.8299999237) {
    if (x[4] <= 1.5149999857) {
      if (x[7] <= 2.1299999356) {
        results[22] = 0;
      }
      else {
        results[22] = 2;
      }
    }
    else {
      if (x[8] <= 14.7050004005) {
        results[22] = 0;
      }
      else {
        results[22] = 0;
      }
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[22] = 0;
    }
    else {
      results[22] = 1;
    }
  }
  if (x[4] <= 1.5799999833) {
    if (x[0] <= 3.7600001097) {
      results[23] = 0;
    }
    else {
      results[23] = 2;
    }
  }
  else {
    if (x[3] <= 7.4500000477) {
      if (x[11] <= 3.5000000000) {
        results[23] = 0;
      }
      else {
        results[23] = 0;
      }
    }
    else {
      results[23] = 1;
    }
  }
  if (x[0] <= 7.1549999714) {
    if (x[10] <= 6.5000000000) {
      results[24] = 0;
    }
    else {
      results[24] = 2;
    }
  }
  else {
    if (x[7] <= 73.0450029373) {
      if (x[7] <= 12.4549999237) {
        results[24] = 2;
      }
      else {
        results[24] = 0;
      }
    }
    else {
      results[24] = 1;
    }
  }
  if (x[9] <= 5.5000000000) {
    if (x[11] <= 1.5000000000) {
      results[25] = 0;
    }
    else {
      if (x[3] <= 3.4100001007) {
        results[25] = 0;
      }
      else {
        results[25] = 1;
      }
    }
  }
  else {
    results[25] = 2;
  }
  if (x[3] <= 6.6700000763) {
    if (x[5] <= -9.0700001717) {
      if (x[3] <= -0.3199999928) {
        results[26] = 2;
      }
      else {
        results[26] = 0;
      }
    }
    else {
      results[26] = 0;
    }
  }
  else {
    results[26] = 1;
  }
  if (x[5] <= -9.0700001717) {
    if (x[9] <= 4.5000000000) {
      results[27] = 0;
    }
    else {
      if (x[6] <= 58.1399993896) {
        results[27] = 0;
      }
      else {
        results[27] = 2;
      }
    }
  }
  else {
    if (x[5] <= -2.1500000358) {
      results[27] = 0;
    }
    else {
      if (x[6] <= 66.7900009155) {
        results[27] = 0;
      }
      else {
        results[27] = 1;
      }
    }
  }
  if (x[2] <= 2.5900000334) {
    if (x[4] <= 1.5799999833) {
      if (x[5] <= -9.5399999619) {
        results[28] = 0;
      }
      else {
        results[28] = 2;
      }
    }
    else {
      results[28] = 0;
    }
  }
  else {
    if (x[3] <= 7.1449999809) {
      results[28] = 0;
    }
    else {
      if (x[9] <= 1.5000000000) {
        results[28] = 0;
      }
      else {
        results[28] = 1;
      }
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[3] <= 7.7249999046) {
      results[29] = 0;
    }
    else {
      results[29] = 1;
    }
  }
  else {
    if (x[3] <= 3.4750000983) {
      if (x[9] <= 4.0000000000) {
        results[29] = 0;
      }
      else {
        results[29] = 2;
      }
    }
    else {
      results[29] = 1;
    }
  }
  if (x[4] <= 1.4199999571) {
    if (x[2] <= 1.2149999738) {
      results[30] = 0;
    }
    else {
      if (x[10] <= 1.5000000000) {
        results[30] = 0;
      }
      else {
        results[30] = 2;
      }
    }
  }
  else {
    if (x[3] <= 7.4500000477) {
      if (x[3] <= 7.1649999619) {
        results[30] = 0;
      }
      else {
        results[30] = 0;
      }
    }
    else {
      results[30] = 1;
    }
  }
  if (x[0] <= 7.6399998665) {
    if (x[6] <= 117.6850013733) {
      results[31] = 0;
    }
    else {
      results[31] = 2;
    }
  }
  else {
    if (x[3] <= 3.5650000125) {
      if (x[11] <= 2.0000000000) {
        results[31] = 0;
      }
      else {
        results[31] = 2;
      }
    }
    else {
      results[31] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[0] <= 7.1849999428) {
      results[32] = 0;
    }
    else {
      if (x[1] <= -2.6899999976) {
        results[32] = 0;
      }
      else {
        results[32] = 1;
      }
    }
  }
  else {
    if (x[5] <= -5.6700001955) {
      results[32] = 2;
    }
    else {
      results[32] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    results[33] = 0;
  }
  else {
    if (x[9] <= 4.0000000000) {
      if (x[9] <= 1.5000000000) {
        results[33] = 0;
      }
      else {
        results[33] = 1;
      }
    }
    else {
      results[33] = 2;
    }
  }
  if (x[6] <= 100.4749984741) {
    results[34] = 0;
  }
  else {
    if (x[7] <= 73.0450029373) {
      if (x[5] <= -7.9849998951) {
        results[34] = 2;
      }
      else {
        results[34] = 0;
      }
    }
    else {
      results[34] = 1;
    }
  }
  if (x[8] <= 4.1700000763) {
    if (x[1] <= 2.6299999505) {
      if (x[10] <= 1.5000000000) {
        results[35] = 0;
      }
      else {
        results[35] = 2;
      }
    }
    else {
      results[35] = 0;
    }
  }
  else {
    if (x[0] <= 7.6349999905) {
      if (x[3] <= 7.5099997520) {
        results[35] = 0;
      }
      else {
        results[35] = 1;
      }
    }
    else {
      results[35] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 5.4900000095) {
      if (x[3] <= -0.4949999899) {
        results[36] = 2;
      }
      else {
        results[36] = 0;
      }
    }
    else {
      results[36] = 0;
    }
  }
  else {
    if (x[11] <= 1.5000000000) {
      results[36] = 0;
    }
    else {
      results[36] = 1;
    }
  }
  if (x[4] <= 1.5799999833) {
    if (x[1] <= 2.6299999505) {
      if (x[0] <= 4.2050000131) {
        results[37] = 0;
      }
      else {
        results[37] = 2;
      }
    }
    else {
      results[37] = 0;
    }
  }
  else {
    if (x[3] <= 7.1649999619) {
      results[37] = 0;
    }
    else {
      if (x[9] <= 1.5000000000) {
        results[37] = 0;
      }
      else {
        results[37] = 1;
      }
    }
  }
  if (x[3] <= 7.1649999619) {
    if (x[9] <= 5.5000000000) {
      if (x[11] <= 4.5000000000) {
        results[38] = 0;
      }
      else {
        results[38] = 2;
      }
    }
    else {
      if (x[0] <= 3.6050001085) {
        results[38] = 0;
      }
      else {
        results[38] = 2;
      }
    }
  }
  else {
    results[38] = 1;
  }
  if (x[3] <= 7.1649999619) {
    if (x[8] <= 3.3700000048) {
      if (x[1] <= 0.0950000025) {
        results[39] = 2;
      }
      else {
        results[39] = 0;
      }
    }
    else {
      if (x[9] <= 4.5000000000) {
        results[39] = 0;
      }
      else {
        results[39] = 0;
      }
    }
  }
  else {
    if (x[11] <= 1.5000000000) {
      results[39] = 0;
    }
    else {
      results[39] = 1;
    }
  }
  if (x[7] <= 13.8599996567) {
    if (x[6] <= 100.4749984741) {
      results[40] = 0;
    }
    else {
      results[40] = 2;
    }
  }
  else {
    if (x[10] <= 1.5000000000) {
      results[40] = 0;
    }
    else {
      if (x[6] <= 66.1950001717) {
        results[40] = 0;
      }
      else {
        results[40] = 1;
      }
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[6] <= 114.9650001526) {
      results[41] = 0;
    }
    else {
      if (x[5] <= -7.9950001240) {
        results[41] = 2;
      }
      else {
        results[41] = 0;
      }
    }
  }
  else {
    if (x[5] <= -4.9800001383) {
      results[41] = 0;
    }
    else {
      results[41] = 1;
    }
  }
  if (x[7] <= 150.4899978638) {
    if (x[11] <= 2.5000000000) {
      if (x[3] <= 7.7199997902) {
        results[42] = 0;
      }
      else {
        results[42] = 1;
      }
    }
    else {
      if (x[3] <= -0.4800000042) {
        results[42] = 2;
      }
      else {
        results[42] = 0;
      }
    }
  }
  else {
    results[42] = 1;
  }
  if (x[3] <= 7.1449999809) {
    if (x[4] <= 1.5799999833) {
      if (x[6] <= 58.1399993896) {
        results[43] = 0;
      }
      else {
        results[43] = 2;
      }
    }
    else {
      results[43] = 0;
    }
  }
  else {
    results[43] = 1;
  }
  if (x[3] <= 6.6500000954) {
    if (x[6] <= 114.9650001526) {
      results[44] = 0;
    }
    else {
      results[44] = 2;
    }
  }
  else {
    if (x[0] <= 5.8049998283) {
      results[44] = 0;
    }
    else {
      results[44] = 1;
    }
  }
  if (x[0] <= 6.7899999619) {
    results[45] = 0;
  }
  else {
    if (x[7] <= 105.1749992371) {
      if (x[2] <= 2.5149999857) {
        results[45] = 2;
      }
      else {
        results[45] = 0;
      }
    }
    else {
      results[45] = 1;
    }
  }
  if (x[0] <= 6.7899999619) {
    results[46] = 0;
  }
  else {
    if (x[2] <= 7.8299999237) {
      if (x[1] <= -2.1500000060) {
        results[46] = 0;
      }
      else {
        results[46] = 2;
      }
    }
    else {
      results[46] = 1;
    }
  }
  if (x[5] <= -9.1100001335) {
    if (x[3] <= -0.5600000024) {
      results[47] = 2;
    }
    else {
      if (x[5] <= -9.4149999619) {
        results[47] = 0;
      }
      else {
        results[47] = 2;
      }
    }
  }
  else {
    if (x[0] <= 7.6050000191) {
      if (x[8] <= 13.1350002289) {
        results[47] = 0;
      }
      else {
        results[47] = 0;
      }
    }
    else {
      if (x[5] <= -4.3349999785) {
        results[47] = 0;
      }
      else {
        results[47] = 1;
      }
    }
  }
  if (x[3] <= 6.4600000381) {
    if (x[8] <= 4.3350000381) {
      if (x[10] <= 3.5000000000) {
        results[48] = 0;
      }
      else {
        results[48] = 2;
      }
    }
    else {
      results[48] = 0;
    }
  }
  else {
    if (x[5] <= 0.2000000179) {
      results[48] = 1;
    }
    else {
      results[48] = 0;
    }
  }
  if (x[7] <= 150.5899963379) {
    if (x[8] <= 4.3350000381) {
      if (x[1] <= 0.0300000003) {
        results[49] = 2;
      }
      else {
        results[49] = 0;
      }
    }
    else {
      if (x[0] <= 7.9049997330) {
        results[49] = 0;
      }
      else {
        results[49] = 0;
      }
    }
  }
  else {
    if (x[3] <= 3.4100001007) {
      results[49] = 0;
    }
    else {
      results[49] = 1;
    }
  }
  if (x[5] <= -9.0700001717) {
    if (x[8] <= 4.3350000381) {
      if (x[5] <= -9.5300002098) {
        results[50] = 0;
      }
      else {
        results[50] = 2;
      }
    }
    else {
      results[50] = 0;
    }
  }
  else {
    if (x[0] <= 7.6349999905) {
      if (x[0] <= 6.6099998951) {
        results[50] = 0;
      }
      else {
        results[50] = 0;
      }
    }
    else {
      results[50] = 1;
    }
  }
  if (x[2] <= 7.4149999619) {
    if (x[6] <= 114.2150001526) {
      results[51] = 0;
    }
    else {
      results[51] = 2;
    }
  }
  else {
    if (x[0] <= 6.0750000477) {
      results[51] = 0;
    }
    else {
      results[51] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    results[52] = 0;
  }
  else {
    if (x[2] <= 4.7399998903) {
      results[52] = 2;
    }
    else {
      results[52] = 1;
    }
  }
  if (x[4] <= 1.5149999857) {
    if (x[1] <= 0.0750000011) {
      results[53] = 2;
    }
    else {
      if (x[0] <= 4.3899999559) {
        results[53] = 0;
      }
      else {
        results[53] = 2;
      }
    }
  }
  else {
    if (x[6] <= 126.6400032043) {
      results[53] = 0;
    }
    else {
      if (x[5] <= -4.5049999952) {
        results[53] = 0;
      }
      else {
        results[53] = 1;
      }
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[9] <= 6.5000000000) {
      if (x[0] <= 7.8299999237) {
        results[54] = 0;
      }
      else {
        results[54] = 2;
      }
    }
    else {
      if (x[6] <= 60.8600006104) {
        results[54] = 0;
      }
      else {
        results[54] = 2;
      }
    }
  }
  else {
    results[54] = 1;
  }
  if (x[4] <= 1.4199999571) {
    if (x[3] <= -1.8449999690) {
      results[55] = 0;
    }
    else {
      if (x[0] <= 3.6050001085) {
        results[55] = 0;
      }
      else {
        results[55] = 2;
      }
    }
  }
  else {
    if (x[7] <= 131.3400039673) {
      results[55] = 0;
    }
    else {
      if (x[1] <= 0.9649999784) {
        results[55] = 1;
      }
      else {
        results[55] = 0;
      }
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 4.3350000381) {
      if (x[7] <= 17.5350003242) {
        results[56] = 2;
      }
      else {
        results[56] = 0;
      }
    }
    else {
      results[56] = 0;
    }
  }
  else {
    results[56] = 1;
  }
  if (x[1] <= -0.5499999821) {
    if (x[0] <= 7.6349999905) {
      results[57] = 0;
    }
    else {
      results[57] = 1;
    }
  }
  else {
    if (x[8] <= 3.0049999952) {
      if (x[0] <= 3.8400000334) {
        results[57] = 0;
      }
      else {
        results[57] = 2;
      }
    }
    else {
      if (x[5] <= -1.8800000548) {
        results[57] = 0;
      }
      else {
        results[57] = 0;
      }
    }
  }
  if (x[6] <= 125.0900001526) {
    results[58] = 0;
  }
  else {
    if (x[5] <= -4.5049999952) {
      if (x[5] <= -7.9849998951) {
        results[58] = 2;
      }
      else {
        results[58] = 0;
      }
    }
    else {
      results[58] = 1;
    }
  }
  if (x[3] <= 6.6700000763) {
    if (x[6] <= 114.9650001526) {
      results[59] = 0;
    }
    else {
      if (x[4] <= 4.7149999738) {
        results[59] = 2;
      }
      else {
        results[59] = 0;
      }
    }
  }
  else {
    if (x[7] <= 71.3100032806) {
      results[59] = 0;
    }
    else {
      results[59] = 1;
    }
  }
  if (x[7] <= 111.7800025940) {
    if (x[4] <= 1.7849999666) {
      if (x[6] <= 58.6149994135) {
        results[60] = 0;
      }
      else {
        results[60] = 2;
      }
    }
    else {
      results[60] = 0;
    }
  }
  else {
    if (x[3] <= 3.4600000530) {
      results[60] = 0;
    }
    else {
      results[60] = 1;
    }
  }
  if (x[5] <= -3.5149999857) {
    if (x[4] <= 1.5149999857) {
      results[61] = 2;
    }
    else {
      results[61] = 0;
    }
  }
  else {
    if (x[9] <= 1.5000000000) {
      results[61] = 0;
    }
    else {
      results[61] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    results[62] = 0;
  }
  else {
    if (x[8] <= 6.8149999380) {
      results[62] = 2;
    }
    else {
      if (x[8] <= 37.2300014496) {
        results[62] = 1;
      }
      else {
        results[62] = 0;
      }
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[11] <= 3.5000000000) {
      if (x[9] <= 7.0000000000) {
        results[63] = 0;
      }
      else {
        results[63] = 2;
      }
    }
    else {
      if (x[1] <= 0.0750000011) {
        results[63] = 2;
      }
      else {
        results[63] = 0;
      }
    }
  }
  else {
    if (x[3] <= 3.2650001049) {
      results[63] = 0;
    }
    else {
      results[63] = 1;
    }
  }
  if (x[2] <= 8.0400002003) {
    if (x[5] <= -9.1000003815) {
      if (x[5] <= -9.4699997902) {
        results[64] = 0;
      }
      else {
        results[64] = 2;
      }
    }
    else {
      results[64] = 0;
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[64] = 0;
    }
    else {
      results[64] = 1;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[9] <= 6.5000000000) {
      if (x[0] <= 7.2699999809) {
        results[65] = 0;
      }
      else {
        results[65] = 2;
      }
    }
    else {
      if (x[5] <= -9.5300002098) {
        results[65] = 0;
      }
      else {
        results[65] = 2;
      }
    }
  }
  else {
    if (x[6] <= 68.9750003815) {
      results[65] = 0;
    }
    else {
      results[65] = 1;
    }
  }
  if (x[4] <= 1.5799999833) {
    if (x[11] <= 3.5000000000) {
      results[66] = 0;
    }
    else {
      if (x[2] <= 1.2049999833) {
        results[66] = 0;
      }
      else {
        results[66] = 2;
      }
    }
  }
  else {
    if (x[8] <= 37.2300014496) {
      if (x[10] <= 1.5000000000) {
        results[66] = 0;
      }
      else {
        results[66] = 1;
      }
    }
    else {
      results[66] = 0;
    }
  }
  if (x[7] <= 142.1549987793) {
    if (x[8] <= 4.3350000381) {
      if (x[10] <= 3.5000000000) {
        results[67] = 0;
      }
      else {
        results[67] = 2;
      }
    }
    else {
      results[67] = 0;
    }
  }
  else {
    if (x[1] <= 0.9399999790) {
      results[67] = 1;
    }
    else {
      results[67] = 0;
    }
  }
  if (x[2] <= 6.2500000000) {
    if (x[0] <= 6.4650001526) {
      results[68] = 0;
    }
    else {
      if (x[11] <= 2.0000000000) {
        results[68] = 0;
      }
      else {
        results[68] = 2;
      }
    }
  }
  else {
    if (x[5] <= -4.9800001383) {
      results[68] = 0;
    }
    else {
      if (x[8] <= 41.9700012207) {
        results[68] = 1;
      }
      else {
        results[68] = 0;
      }
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[9] <= 4.5000000000) {
      results[69] = 0;
    }
    else {
      if (x[0] <= 3.6050001085) {
        results[69] = 0;
      }
      else {
        results[69] = 2;
      }
    }
  }
  else {
    if (x[6] <= 69.6600008011) {
      results[69] = 0;
    }
    else {
      results[69] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[4] <= 1.7849999666) {
      if (x[6] <= 61.3350006342) {
        results[70] = 0;
      }
      else {
        results[70] = 2;
      }
    }
    else {
      results[70] = 0;
    }
  }
  else {
    if (x[4] <= 7.0249998569) {
      results[70] = 1;
    }
    else {
      results[70] = 0;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[6] <= 114.9650001526) {
      results[71] = 0;
    }
    else {
      if (x[8] <= 56.3549981117) {
        results[71] = 2;
      }
      else {
        results[71] = 0;
      }
    }
  }
  else {
    if (x[1] <= -0.2300000023) {
      results[71] = 1;
    }
    else {
      results[71] = 0;
    }
  }
  if (x[5] <= -9.1000003815) {
    if (x[7] <= 1.6449999511) {
      results[72] = 0;
    }
    else {
      results[72] = 2;
    }
  }
  else {
    if (x[6] <= 112.7500000000) {
      results[72] = 0;
    }
    else {
      if (x[5] <= -4.5049999952) {
        results[72] = 0;
      }
      else {
        results[72] = 1;
      }
    }
  }
  if (x[8] <= 4.2799999714) {
    if (x[6] <= 58.6149994135) {
      results[73] = 0;
    }
    else {
      results[73] = 2;
    }
  }
  else {
    if (x[6] <= 115.8800010681) {
      if (x[4] <= 2.2950000763) {
        results[73] = 1;
      }
      else {
        results[73] = 0;
      }
    }
    else {
      results[73] = 1;
    }
  }
  if (x[7] <= 119.9600028992) {
    if (x[5] <= -8.7750000954) {
      if (x[0] <= 3.6050001085) {
        results[74] = 0;
      }
      else {
        results[74] = 2;
      }
    }
    else {
      results[74] = 0;
    }
  }
  else {
    if (x[1] <= -0.3149999958) {
      results[74] = 1;
    }
    else {
      results[74] = 0;
    }
  }
  if (x[9] <= 4.5000000000) {
    if (x[3] <= 7.1449999809) {
      results[75] = 0;
    }
    else {
      results[75] = 1;
    }
  }
  else {
    if (x[6] <= 58.1399993896) {
      results[75] = 0;
    }
    else {
      results[75] = 2;
    }
  }
  if (x[7] <= 142.2549972534) {
    if (x[8] <= 3.3700000048) {
      if (x[11] <= 3.5000000000) {
        results[76] = 0;
      }
      else {
        results[76] = 2;
      }
    }
    else {
      if (x[9] <= 4.5000000000) {
        results[76] = 0;
      }
      else {
        results[76] = 2;
      }
    }
  }
  else {
    if (x[8] <= 39.4800004959) {
      if (x[3] <= 3.4100001007) {
        results[76] = 0;
      }
      else {
        results[76] = 1;
      }
    }
    else {
      results[76] = 0;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[8] <= 4.1700000763) {
      if (x[2] <= 1.2049999833) {
        results[77] = 0;
      }
      else {
        results[77] = 2;
      }
    }
    else {
      results[77] = 0;
    }
  }
  else {
    if (x[5] <= -5.0150000453) {
      results[77] = 0;
    }
    else {
      results[77] = 1;
    }
  }
  if (x[0] <= 6.4650001526) {
    results[78] = 0;
  }
  else {
    if (x[10] <= 3.5000000000) {
      if (x[5] <= -4.2349999547) {
        results[78] = 0;
      }
      else {
        results[78] = 1;
      }
    }
    else {
      if (x[1] <= -1.0300000012) {
        results[78] = 1;
      }
      else {
        results[78] = 2;
      }
    }
  }
  if (x[7] <= 119.9600028992) {
    if (x[6] <= 114.2150001526) {
      results[79] = 0;
    }
    else {
      if (x[3] <= -2.9999999404) {
        results[79] = 0;
      }
      else {
        results[79] = 2;
      }
    }
  }
  else {
    if (x[6] <= 81.9149990082) {
      results[79] = 0;
    }
    else {
      results[79] = 1;
    }
  }
  if (x[5] <= -9.0199999809) {
    if (x[3] <= -0.4549999982) {
      results[80] = 2;
    }
    else {
      if (x[6] <= 91.5149993896) {
        results[80] = 0;
      }
      else {
        results[80] = 2;
      }
    }
  }
  else {
    if (x[7] <= 142.2549972534) {
      results[80] = 0;
    }
    else {
      if (x[1] <= 0.1799999969) {
        results[80] = 1;
      }
      else {
        results[80] = 0;
      }
    }
  }
  if (x[8] <= 4.3350000381) {
    if (x[5] <= -9.5300002098) {
      results[81] = 0;
    }
    else {
      results[81] = 2;
    }
  }
  else {
    if (x[0] <= 7.1849999428) {
      results[81] = 0;
    }
    else {
      if (x[2] <= 7.8299999237) {
        results[81] = 0;
      }
      else {
        results[81] = 1;
      }
    }
  }
  if (x[9] <= 4.5000000000) {
    if (x[10] <= 1.5000000000) {
      results[82] = 0;
    }
    else {
      if (x[4] <= 4.6699998379) {
        results[82] = 1;
      }
      else {
        results[82] = 0;
      }
    }
  }
  else {
    if (x[0] <= 3.9550000429) {
      results[82] = 0;
    }
    else {
      results[82] = 2;
    }
  }
  if (x[10] <= 1.5000000000) {
    results[83] = 0;
  }
  else {
    if (x[7] <= 74.3499984741) {
      if (x[10] <= 3.5000000000) {
        results[83] = 0;
      }
      else {
        results[83] = 2;
      }
    }
    else {
      results[83] = 1;
    }
  }
  if (x[9] <= 4.5000000000) {
    if (x[0] <= 7.1549999714) {
      results[84] = 0;
    }
    else {
      if (x[5] <= -4.3349999785) {
        results[84] = 0;
      }
      else {
        results[84] = 1;
      }
    }
  }
  else {
    if (x[0] <= 4.3950001001) {
      results[84] = 0;
    }
    else {
      results[84] = 2;
    }
  }
  if (x[0] <= 6.4650001526) {
    results[85] = 0;
  }
  else {
    if (x[7] <= 111.3199996948) {
      if (x[4] <= 1.5149999857) {
        results[85] = 2;
      }
      else {
        results[85] = 0;
      }
    }
    else {
      results[85] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[3] <= 7.5099997520) {
      results[86] = 0;
    }
    else {
      results[86] = 1;
    }
  }
  else {
    if (x[2] <= 5.0149999857) {
      results[86] = 2;
    }
    else {
      results[86] = 1;
    }
  }
  if (x[6] <= 75.7950000763) {
    results[87] = 0;
  }
  else {
    if (x[5] <= -5.2450000048) {
      if (x[8] <= 11.5350003242) {
        results[87] = 2;
      }
      else {
        results[87] = 0;
      }
    }
    else {
      results[87] = 1;
    }
  }
  if (x[0] <= 7.1549999714) {
    if (x[6] <= 126.4850044250) {
      results[88] = 0;
    }
    else {
      results[88] = 2;
    }
  }
  else {
    if (x[2] <= 4.7399998903) {
      results[88] = 2;
    }
    else {
      if (x[11] <= 1.5000000000) {
        results[88] = 0;
      }
      else {
        results[88] = 1;
      }
    }
  }
  if (x[8] <= 5.3250000477) {
    if (x[6] <= 102.6250000000) {
      results[89] = 0;
    }
    else {
      results[89] = 2;
    }
  }
  else {
    if (x[2] <= 7.8650000095) {
      if (x[6] <= 177.8450012207) {
        results[89] = 0;
      }
      else {
        results[89] = 1;
      }
    }
    else {
      if (x[9] <= 3.5000000000) {
        results[89] = 1;
      }
      else {
        results[89] = 0;
      }
    }
  }
  if (x[3] <= 7.1649999619) {
    if (x[6] <= 126.4850044250) {
      results[90] = 0;
    }
    else {
      results[90] = 2;
    }
  }
  else {
    results[90] = 1;
  }
  if (x[9] <= 4.5000000000) {
    if (x[7] <= 136.5149993896) {
      results[91] = 0;
    }
    else {
      if (x[3] <= 3.4100001007) {
        results[91] = 0;
      }
      else {
        results[91] = 1;
      }
    }
  }
  else {
    if (x[0] <= 4.4750000238) {
      results[91] = 0;
    }
    else {
      results[91] = 2;
    }
  }
  if (x[2] <= 7.8650000095) {
    if (x[4] <= 1.5799999833) {
      if (x[9] <= 7.5000000000) {
        results[92] = 2;
      }
      else {
        results[92] = 2;
      }
    }
    else {
      if (x[6] <= 177.8450012207) {
        results[92] = 0;
      }
      else {
        results[92] = 1;
      }
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[92] = 0;
    }
    else {
      results[92] = 1;
    }
  }
  if (x[5] <= -2.4300000668) {
    if (x[8] <= 4.3350000381) {
      if (x[2] <= 1.3149999976) {
        results[93] = 2;
      }
      else {
        results[93] = 2;
      }
    }
    else {
      results[93] = 0;
    }
  }
  else {
    if (x[8] <= 103.1600017548) {
      results[93] = 1;
    }
    else {
      results[93] = 0;
    }
  }
  if (x[6] <= 114.2150001526) {
    if (x[7] <= 170.5650024414) {
      results[94] = 0;
    }
    else {
      results[94] = 1;
    }
  }
  else {
    if (x[1] <= -0.4399999976) {
      if (x[9] <= 5.0000000000) {
        results[94] = 1;
      }
      else {
        results[94] = 2;
      }
    }
    else {
      if (x[4] <= 4.6499999762) {
        results[94] = 2;
      }
      else {
        results[94] = 0;
      }
    }
  }
  if (x[9] <= 3.5000000000) {
    if (x[8] <= 37.2300014496) {
      if (x[8] <= 4.0450000763) {
        results[95] = 0;
      }
      else {
        results[95] = 1;
      }
    }
    else {
      results[95] = 0;
    }
  }
  else {
    if (x[7] <= 18.2600002289) {
      if (x[3] <= -0.5699999928) {
        results[95] = 2;
      }
      else {
        results[95] = 2;
      }
    }
    else {
      results[95] = 0;
    }
  }
  if (x[4] <= 1.3999999762) {
    if (x[5] <= -9.5300002098) {
      results[96] = 0;
    }
    else {
      results[96] = 2;
    }
  }
  else {
    if (x[3] <= 5.5450000763) {
      results[96] = 0;
    }
    else {
      if (x[0] <= 5.7749998569) {
        results[96] = 0;
      }
      else {
        results[96] = 1;
      }
    }
  }
  if (x[9] <= 4.5000000000) {
    if (x[3] <= 6.6500000954) {
      results[97] = 0;
    }
    else {
      results[97] = 1;
    }
  }
  else {
    if (x[0] <= 3.6050001085) {
      results[97] = 0;
    }
    else {
      results[97] = 2;
    }
  }
  if (x[7] <= 119.9600028992) {
    if (x[11] <= 4.5000000000) {
      if (x[10] <= 5.5000000000) {
        results[98] = 0;
      }
      else {
        results[98] = 2;
      }
    }
    else {
      if (x[8] <= 5.8849997520) {
        results[98] = 2;
      }
      else {
        results[98] = 0;
      }
    }
  }
  else {
    if (x[3] <= 3.2850000858) {
      results[98] = 0;
    }
    else {
      results[98] = 1;
    }
  }
  if (x[6] <= 115.8800010681) {
    results[99] = 0;
  }
  else {
    if (x[4] <= 1.4199999571) {
      results[99] = 2;
    }
    else {
      results[99] = 1;
    }
  }
  int classes_amount = 0;
  for(int i=0; i<100; i++){
  	if(results[i]+1 > classes_amount) classes_amount = results[i]+1;  }
  int result_class = -1;
  int max_apperance = 0;
  for(int i=0; i<classes_amount; i++){
   int apperance = 0;
  	for(int j=0; j<100; j++) if(results[j] == i) apperance++;
  	if(apperance > max_apperance){
  		max_apperance = apperance;
  		result_class = i;
  	}
  }
  return result_class;
}
