#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_15_input_array[14] = {
+4.37190588e-01f,-5.17559605e-01f,+6.65310022e-01f,-1.34628431e-01f,+5.90238495e-01f,
+1.35282475e+00f,+8.97999686e-01f,+6.57909514e-01f,+1.85427942e+00f,-9.91628335e-01f,
+6.47699334e-01f,+1.92350671e+00f,-1.47916452e+00f,-1.46351783e+00f,}; 
k2c_tensor test1_input_1_15_input = {&test1_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test1_array[4] = {
+7.18418732e-02f,+2.12793231e-01f,+1.74097791e-01f,-2.88315743e-01f,}; 
k2c_tensor keras_dense_3_15_test1 = {&keras_dense_3_15_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test1_array[4] = {0}; 
k2c_tensor c_dense_3_15_test1 = {&c_dense_3_15_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_15_input_array[14] = {
+5.36694136e-03f,+2.87075337e-01f,-1.23641470e+00f,-2.68804095e-02f,+3.88458362e-01f,
-1.16123591e+00f,-9.05119055e-01f,-7.65479773e-02f,+1.19386883e+00f,-4.77388567e-01f,
+1.28175488e+00f,+1.21580609e+00f,-1.03865550e+00f,-1.37681392e+00f,}; 
k2c_tensor test2_input_1_15_input = {&test2_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test2_array[4] = {
+1.68875679e-01f,+8.11231285e-02f,-1.79302514e-01f,-5.65284006e-02f,}; 
k2c_tensor keras_dense_3_15_test2 = {&keras_dense_3_15_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test2_array[4] = {0}; 
k2c_tensor c_dense_3_15_test2 = {&c_dense_3_15_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_15_input_array[14] = {
-1.58611538e+00f,-6.28495602e-01f,-8.25123830e-01f,+1.86208069e+00f,-3.15621595e-01f,
+1.42345487e+00f,+1.88919585e+00f,+1.42465895e-01f,-1.25362182e-01f,-1.88218472e+00f,
-7.06145465e-01f,-8.48668096e-01f,-1.49144890e+00f,-5.30697673e-01f,}; 
k2c_tensor test3_input_1_15_input = {&test3_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test3_array[4] = {
+1.13080166e-01f,-3.46039869e-02f,+4.47383046e-01f,-2.48544991e-01f,}; 
k2c_tensor keras_dense_3_15_test3 = {&keras_dense_3_15_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test3_array[4] = {0}; 
k2c_tensor c_dense_3_15_test3 = {&c_dense_3_15_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_15_input_array[14] = {
-6.25499647e-01f,-1.90919342e+00f,+1.86754163e+00f,+7.61423046e-02f,+6.84048766e-01f,
+5.72564743e-01f,+1.85534830e+00f,-1.09329401e+00f,-9.61137098e-01f,-1.71522541e+00f,
-1.89867306e+00f,-1.45201836e+00f,-1.10968538e-01f,+1.11368075e-02f,}; 
k2c_tensor test4_input_1_15_input = {&test4_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test4_array[4] = {
+5.23612723e-02f,-1.43315494e-01f,+1.45860881e-01f,-1.22504987e-01f,}; 
k2c_tensor keras_dense_3_15_test4 = {&keras_dense_3_15_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test4_array[4] = {0}; 
k2c_tensor c_dense_3_15_test4 = {&c_dense_3_15_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_15_input_array[14] = {
+1.52647245e+00f,-5.90655825e-01f,+1.31259519e-01f,+1.86227792e-01f,+5.61479051e-01f,
+4.80075928e-01f,+1.90291669e+00f,-1.94560592e+00f,-6.09018220e-01f,+6.24291926e-01f,
+1.27300186e+00f,+3.24342658e-01f,-9.80307569e-01f,-1.89336716e+00f,}; 
k2c_tensor test5_input_1_15_input = {&test5_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test5_array[4] = {
+2.98225880e-01f,+8.68582949e-02f,+2.09772855e-01f,-3.31823349e-01f,}; 
k2c_tensor keras_dense_3_15_test5 = {&keras_dense_3_15_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test5_array[4] = {0}; 
k2c_tensor c_dense_3_15_test5 = {&c_dense_3_15_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_15_input_array[14] = {
-7.39758370e-01f,-9.15579826e-01f,+2.34578843e-01f,+9.03477486e-01f,+1.77669772e+00f,
-2.52550301e-01f,-1.37884029e+00f,-9.36324281e-01f,-5.92126244e-01f,-1.34539908e-01f,
-7.17760840e-01f,-3.38349997e-01f,+1.63638991e+00f,-7.17137861e-01f,}; 
k2c_tensor test6_input_1_15_input = {&test6_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test6_array[4] = {
+3.47971618e-01f,+3.43595184e-02f,+2.96026289e-01f,-2.77863532e-01f,}; 
k2c_tensor keras_dense_3_15_test6 = {&keras_dense_3_15_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test6_array[4] = {0}; 
k2c_tensor c_dense_3_15_test6 = {&c_dense_3_15_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_15_input_array[14] = {
-1.28025897e+00f,+2.79001356e-01f,-1.14432604e+00f,-1.45220343e+00f,+1.76291280e+00f,
-2.55462155e-01f,-1.21662279e+00f,+1.38992546e-01f,-7.08545560e-01f,-1.47435996e+00f,
+9.81749577e-01f,-5.49923140e-01f,+1.28141677e+00f,+1.45124928e+00f,}; 
k2c_tensor test7_input_1_15_input = {&test7_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test7_array[4] = {
+2.75521785e-01f,+2.10216284e-01f,+6.63276762e-02f,-3.37862492e-01f,}; 
k2c_tensor keras_dense_3_15_test7 = {&keras_dense_3_15_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test7_array[4] = {0}; 
k2c_tensor c_dense_3_15_test7 = {&c_dense_3_15_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_15_input_array[14] = {
+1.83368999e+00f,-7.15052034e-01f,-1.95513095e+00f,-1.19895639e+00f,+4.03801040e-01f,
+1.38366524e+00f,-8.33605035e-01f,-7.04115562e-01f,-1.24385009e-01f,-4.18555673e-01f,
-1.96928692e+00f,+2.64922658e-01f,-7.55020519e-01f,+1.69790829e+00f,}; 
k2c_tensor test8_input_1_15_input = {&test8_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test8_array[4] = {
+4.95386511e-01f,+1.09836072e-01f,-8.49751756e-03f,-1.72588319e-01f,}; 
k2c_tensor keras_dense_3_15_test8 = {&keras_dense_3_15_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test8_array[4] = {0}; 
k2c_tensor c_dense_3_15_test8 = {&c_dense_3_15_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_15_input_array[14] = {
+1.39597158e-01f,-1.04033667e+00f,-9.33083077e-01f,+1.85082568e+00f,+1.59830674e+00f,
+4.25199936e-01f,-1.77428535e+00f,+9.70445330e-01f,+1.88704227e-01f,-2.46394501e-01f,
-5.86073728e-01f,-1.96739408e+00f,+2.12195915e-01f,-1.52504042e+00f,}; 
k2c_tensor test9_input_1_15_input = {&test9_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test9_array[4] = {
+3.61431658e-01f,+1.40296936e-01f,+3.96697342e-01f,-1.49124742e-01f,}; 
k2c_tensor keras_dense_3_15_test9 = {&keras_dense_3_15_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test9_array[4] = {0}; 
k2c_tensor c_dense_3_15_test9 = {&c_dense_3_15_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_15_input_array[14] = {
-5.74797789e-01f,-1.27109476e+00f,+5.45333264e-01f,-7.56114369e-01f,+5.96211630e-03f,
+1.03603241e-01f,+1.66163027e+00f,+1.85742132e+00f,+1.47535611e-01f,-1.33126994e+00f,
-7.86940597e-01f,-3.59743417e-01f,-1.49988290e+00f,+1.58581547e+00f,}; 
k2c_tensor test10_input_1_15_input = {&test10_input_1_15_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_15_test10_array[4] = {
+3.21987987e-01f,+2.11836919e-02f,+1.40560195e-01f,-1.02349259e-01f,}; 
k2c_tensor keras_dense_3_15_test10 = {&keras_dense_3_15_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_15_test10_array[4] = {0}; 
k2c_tensor c_dense_3_15_test10 = {&c_dense_3_15_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_omode(&test1_input_1_15_input,&c_dense_3_15_test1); 
torbeam_EC4_omode(&test2_input_1_15_input,&c_dense_3_15_test2); 
torbeam_EC4_omode(&test3_input_1_15_input,&c_dense_3_15_test3); 
torbeam_EC4_omode(&test4_input_1_15_input,&c_dense_3_15_test4); 
torbeam_EC4_omode(&test5_input_1_15_input,&c_dense_3_15_test5); 
torbeam_EC4_omode(&test6_input_1_15_input,&c_dense_3_15_test6); 
torbeam_EC4_omode(&test7_input_1_15_input,&c_dense_3_15_test7); 
torbeam_EC4_omode(&test8_input_1_15_input,&c_dense_3_15_test8); 
torbeam_EC4_omode(&test9_input_1_15_input,&c_dense_3_15_test9); 
torbeam_EC4_omode(&test10_input_1_15_input,&c_dense_3_15_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_15_test1,&c_dense_3_15_test1); 
errors[1] = maxabs(&keras_dense_3_15_test2,&c_dense_3_15_test2); 
errors[2] = maxabs(&keras_dense_3_15_test3,&c_dense_3_15_test3); 
errors[3] = maxabs(&keras_dense_3_15_test4,&c_dense_3_15_test4); 
errors[4] = maxabs(&keras_dense_3_15_test5,&c_dense_3_15_test5); 
errors[5] = maxabs(&keras_dense_3_15_test6,&c_dense_3_15_test6); 
errors[6] = maxabs(&keras_dense_3_15_test7,&c_dense_3_15_test7); 
errors[7] = maxabs(&keras_dense_3_15_test8,&c_dense_3_15_test8); 
errors[8] = maxabs(&keras_dense_3_15_test9,&c_dense_3_15_test9); 
errors[9] = maxabs(&keras_dense_3_15_test10,&c_dense_3_15_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC4_omode_terminate(); 
if (maxerror > 1e-05) { 
return 1;} 
return 0;
} 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2){ 

    float x = 0; 

    float y = 0; 

    for(size_t i=0; i<tensor1->numel; i++){

    y = fabsf(tensor1->array[i]-tensor2->array[i]);
    if (y>x) {x=y;}}
    return x;}

