#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_11_input_array[14] = {
-7.86427369e-01f,+9.41343461e-01f,-1.39241664e+00f,-6.87250339e-01f,+2.15544244e-01f,
+1.11769965e+00f,-1.84949309e-01f,+4.84104535e-01f,+1.81669104e+00f,+9.44745112e-01f,
-1.80960793e+00f,+1.14086917e+00f,+7.30809031e-01f,-8.74001299e-01f,}; 
k2c_tensor test1_input_1_11_input = {&test1_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test1_array[4] = {
-3.44442934e-01f,+4.96564746e-01f,+2.70569175e-01f,-6.04393244e-01f,}; 
k2c_tensor keras_dense_3_11_test1 = {&keras_dense_3_11_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test1_array[4] = {0}; 
k2c_tensor c_dense_3_11_test1 = {&c_dense_3_11_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_11_input_array[14] = {
+1.05244693e+00f,-7.49961473e-03f,+1.96776249e-01f,+1.10802713e+00f,-5.10907253e-01f,
-1.30596834e+00f,-3.18974978e-02f,-1.48478370e+00f,-3.44475165e-01f,+8.54368911e-01f,
-1.58012237e-01f,+4.42409289e-01f,-4.09467373e-02f,+1.88472053e+00f,}; 
k2c_tensor test2_input_1_11_input = {&test2_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test2_array[4] = {
-4.99797255e-01f,-1.66336149e-01f,-1.82208091e-01f,-4.41433161e-01f,}; 
k2c_tensor keras_dense_3_11_test2 = {&keras_dense_3_11_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test2_array[4] = {0}; 
k2c_tensor c_dense_3_11_test2 = {&c_dense_3_11_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_11_input_array[14] = {
-7.61082890e-01f,-3.88056625e-02f,-1.75259593e+00f,-3.67597072e-01f,-1.92271319e+00f,
-9.31188595e-01f,-1.57813359e+00f,-2.52338696e-01f,-1.38700436e+00f,+3.51365641e-01f,
-1.59024674e+00f,-1.38582314e+00f,+4.78255431e-02f,+8.28636247e-01f,}; 
k2c_tensor test3_input_1_11_input = {&test3_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test3_array[4] = {
-1.32479399e-01f,+1.91142336e-01f,-2.26080120e-02f,-3.90199184e-01f,}; 
k2c_tensor keras_dense_3_11_test3 = {&keras_dense_3_11_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test3_array[4] = {0}; 
k2c_tensor c_dense_3_11_test3 = {&c_dense_3_11_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_11_input_array[14] = {
-5.51817587e-01f,+1.78188143e+00f,-7.39433198e-01f,-1.36130922e+00f,-6.35334552e-01f,
-6.66122540e-01f,-1.18344509e+00f,-1.85693196e-01f,-1.40766547e+00f,-1.68091420e+00f,
+7.89772621e-01f,-1.69074781e+00f,+1.07433585e+00f,+1.04636494e+00f,}; 
k2c_tensor test4_input_1_11_input = {&test4_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test4_array[4] = {
-2.88370624e-02f,+9.74422619e-02f,-4.41611484e-02f,-1.72683373e-01f,}; 
k2c_tensor keras_dense_3_11_test4 = {&keras_dense_3_11_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test4_array[4] = {0}; 
k2c_tensor c_dense_3_11_test4 = {&c_dense_3_11_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_11_input_array[14] = {
+1.25592908e+00f,+9.71358557e-01f,-1.14531294e+00f,-1.22445351e-01f,-2.70112700e-01f,
-6.63144699e-01f,-1.30882442e+00f,-5.34731871e-01f,+1.03377676e+00f,+4.86485708e-01f,
-1.15476700e+00f,-1.84561386e+00f,-1.40898338e+00f,+5.92505899e-01f,}; 
k2c_tensor test5_input_1_11_input = {&test5_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test5_array[4] = {
-4.56929296e-01f,-5.53550534e-02f,-7.31777074e-03f,-5.71191072e-01f,}; 
k2c_tensor keras_dense_3_11_test5 = {&keras_dense_3_11_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test5_array[4] = {0}; 
k2c_tensor c_dense_3_11_test5 = {&c_dense_3_11_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_11_input_array[14] = {
-1.83302796e-02f,+6.59376820e-02f,-3.68169912e-02f,-1.33990160e+00f,-2.35074805e-01f,
-5.00121861e-01f,-9.10001052e-03f,+1.14271454e+00f,-4.86933613e-02f,-1.43363688e+00f,
+1.85196545e+00f,-1.01842958e+00f,-4.68637218e-01f,-1.33419494e+00f,}; 
k2c_tensor test6_input_1_11_input = {&test6_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test6_array[4] = {
-2.15937316e-01f,+3.58167112e-01f,+1.69848695e-01f,-3.04210275e-01f,}; 
k2c_tensor keras_dense_3_11_test6 = {&keras_dense_3_11_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test6_array[4] = {0}; 
k2c_tensor c_dense_3_11_test6 = {&c_dense_3_11_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_11_input_array[14] = {
+3.38905961e-01f,+3.70687280e-01f,+1.05968994e-01f,+3.21374124e-01f,+1.43827365e+00f,
-7.08973359e-01f,-7.05855408e-02f,-4.08416250e-01f,-1.00982109e+00f,-8.95313092e-01f,
+4.68738985e-01f,+5.04012629e-01f,+7.47448293e-02f,-3.10221369e-01f,}; 
k2c_tensor test7_input_1_11_input = {&test7_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test7_array[4] = {
-3.50714065e-02f,+1.44096702e-01f,+1.63373500e-01f,-2.36399412e-01f,}; 
k2c_tensor keras_dense_3_11_test7 = {&keras_dense_3_11_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test7_array[4] = {0}; 
k2c_tensor c_dense_3_11_test7 = {&c_dense_3_11_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_11_input_array[14] = {
+8.20802994e-01f,-1.36472470e+00f,+9.12864808e-01f,-6.10964506e-01f,-3.47944041e-01f,
+1.10717915e+00f,+1.72283982e+00f,+1.99290555e+00f,+4.41486896e-01f,-1.64939809e+00f,
-8.49516729e-01f,-8.36821612e-01f,+7.87094831e-01f,-7.71505979e-01f,}; 
k2c_tensor test8_input_1_11_input = {&test8_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test8_array[4] = {
-5.05372941e-01f,+3.88833165e-01f,+1.22668058e-01f,-4.71435577e-01f,}; 
k2c_tensor keras_dense_3_11_test8 = {&keras_dense_3_11_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test8_array[4] = {0}; 
k2c_tensor c_dense_3_11_test8 = {&c_dense_3_11_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_11_input_array[14] = {
-1.96442913e+00f,-2.74396046e-01f,-7.80503913e-01f,+2.89644175e-01f,-3.93481641e-01f,
+4.07635362e-01f,-1.65616652e+00f,-1.90798022e+00f,-8.33589282e-01f,+1.53592018e+00f,
+1.78323358e+00f,+1.72407664e+00f,-5.72201936e-01f,-1.13930382e+00f,}; 
k2c_tensor test9_input_1_11_input = {&test9_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test9_array[4] = {
-2.05228284e-01f,+7.25012496e-02f,+1.98738202e-02f,-1.34220034e-01f,}; 
k2c_tensor keras_dense_3_11_test9 = {&keras_dense_3_11_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test9_array[4] = {0}; 
k2c_tensor c_dense_3_11_test9 = {&c_dense_3_11_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_11_input_array[14] = {
-1.09537473e+00f,-7.53717748e-01f,-1.95933464e+00f,-1.50991316e+00f,+1.09350021e+00f,
+1.14573522e+00f,-5.92490645e-01f,+1.48929754e-01f,-8.07429487e-01f,-3.62973092e-01f,
+1.77008096e+00f,-7.13136650e-01f,-1.25405102e+00f,+1.06359794e+00f,}; 
k2c_tensor test10_input_1_11_input = {&test10_input_1_11_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_11_test10_array[4] = {
-2.49995496e-02f,+4.32228819e-02f,+9.05378908e-03f,-2.75769264e-01f,}; 
k2c_tensor keras_dense_3_11_test10 = {&keras_dense_3_11_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_11_test10_array[4] = {0}; 
k2c_tensor c_dense_3_11_test10 = {&c_dense_3_11_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_omode(&test1_input_1_11_input,&c_dense_3_11_test1); 
torbeam_EC5_omode(&test2_input_1_11_input,&c_dense_3_11_test2); 
torbeam_EC5_omode(&test3_input_1_11_input,&c_dense_3_11_test3); 
torbeam_EC5_omode(&test4_input_1_11_input,&c_dense_3_11_test4); 
torbeam_EC5_omode(&test5_input_1_11_input,&c_dense_3_11_test5); 
torbeam_EC5_omode(&test6_input_1_11_input,&c_dense_3_11_test6); 
torbeam_EC5_omode(&test7_input_1_11_input,&c_dense_3_11_test7); 
torbeam_EC5_omode(&test8_input_1_11_input,&c_dense_3_11_test8); 
torbeam_EC5_omode(&test9_input_1_11_input,&c_dense_3_11_test9); 
torbeam_EC5_omode(&test10_input_1_11_input,&c_dense_3_11_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_11_test1,&c_dense_3_11_test1); 
errors[1] = maxabs(&keras_dense_3_11_test2,&c_dense_3_11_test2); 
errors[2] = maxabs(&keras_dense_3_11_test3,&c_dense_3_11_test3); 
errors[3] = maxabs(&keras_dense_3_11_test4,&c_dense_3_11_test4); 
errors[4] = maxabs(&keras_dense_3_11_test5,&c_dense_3_11_test5); 
errors[5] = maxabs(&keras_dense_3_11_test6,&c_dense_3_11_test6); 
errors[6] = maxabs(&keras_dense_3_11_test7,&c_dense_3_11_test7); 
errors[7] = maxabs(&keras_dense_3_11_test8,&c_dense_3_11_test8); 
errors[8] = maxabs(&keras_dense_3_11_test9,&c_dense_3_11_test9); 
errors[9] = maxabs(&keras_dense_3_11_test10,&c_dense_3_11_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC5_omode_terminate(); 
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

