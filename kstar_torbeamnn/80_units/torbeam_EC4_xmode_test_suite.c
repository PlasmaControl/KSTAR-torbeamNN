#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_14_input_array[14] = {
-1.47700481e+00f,-1.39681197e+00f,+9.77658299e-01f,-1.64892291e+00f,+6.12445021e-01f,
+1.46152351e+00f,-9.62675186e-01f,+1.77143609e+00f,+1.13320471e+00f,-5.53326844e-01f,
-1.52466992e+00f,-3.40655601e-01f,-5.14492210e-01f,-9.90978062e-01f,}; 
k2c_tensor test1_input_1_14_input = {&test1_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test1_array[4] = {
-2.71311104e-01f,+1.32599831e-01f,-3.92234683e-01f,+2.67826825e-01f,}; 
k2c_tensor keras_dense_3_14_test1 = {&keras_dense_3_14_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test1_array[4] = {0}; 
k2c_tensor c_dense_3_14_test1 = {&c_dense_3_14_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_14_input_array[14] = {
-4.52178554e-01f,+1.17421241e+00f,-1.21127444e+00f,-1.26864683e-01f,-8.42420242e-01f,
+6.46102235e-01f,-9.26016751e-01f,+1.90179653e+00f,-1.08354337e+00f,+1.20578917e-01f,
-2.03595385e-02f,-3.01504518e-01f,-1.88191416e+00f,-4.97270640e-01f,}; 
k2c_tensor test2_input_1_14_input = {&test2_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test2_array[4] = {
-9.18685198e-02f,-1.71891488e-02f,-6.72808066e-02f,-1.06591051e-02f,}; 
k2c_tensor keras_dense_3_14_test2 = {&keras_dense_3_14_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test2_array[4] = {0}; 
k2c_tensor c_dense_3_14_test2 = {&c_dense_3_14_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_14_input_array[14] = {
+1.14827508e+00f,-1.50441011e+00f,-1.37799198e+00f,-7.72010006e-01f,-4.62557412e-01f,
+1.66188474e-02f,+6.04013926e-01f,+3.87238562e-01f,+5.29057536e-02f,+1.92380238e+00f,
-1.82245127e+00f,-2.95092135e-01f,+8.11632685e-01f,-1.48175609e+00f,}; 
k2c_tensor test3_input_1_14_input = {&test3_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test3_array[4] = {
-3.31002623e-01f,+3.29147607e-01f,-3.59858185e-01f,+2.50513822e-01f,}; 
k2c_tensor keras_dense_3_14_test3 = {&keras_dense_3_14_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test3_array[4] = {0}; 
k2c_tensor c_dense_3_14_test3 = {&c_dense_3_14_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_14_input_array[14] = {
-3.92790562e-01f,-4.33256309e-01f,-7.61620017e-01f,+1.61071991e+00f,-1.81514375e+00f,
+1.13244443e+00f,-4.73814157e-01f,+6.05771656e-01f,-1.36893863e+00f,-9.54560771e-01f,
-5.50932864e-01f,-1.89846809e+00f,-1.83572038e+00f,-1.55839725e+00f,}; 
k2c_tensor test4_input_1_14_input = {&test4_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test4_array[4] = {
-1.08851589e-01f,+1.80923387e-01f,+7.44711831e-02f,+1.08163886e-01f,}; 
k2c_tensor keras_dense_3_14_test4 = {&keras_dense_3_14_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test4_array[4] = {0}; 
k2c_tensor c_dense_3_14_test4 = {&c_dense_3_14_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_14_input_array[14] = {
+1.75268954e+00f,+8.24319841e-01f,-1.95475325e-01f,-4.34686173e-01f,-1.15426282e+00f,
-8.17894219e-01f,-3.59938590e-01f,-2.60660117e-01f,-4.77547963e-01f,+1.15142116e+00f,
+5.49232769e-01f,-1.03885054e+00f,-1.04873702e+00f,+1.90226809e+00f,}; 
k2c_tensor test5_input_1_14_input = {&test5_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test5_array[4] = {
-2.64589489e-01f,+1.99677452e-01f,-1.09424740e-01f,-2.12242454e-01f,}; 
k2c_tensor keras_dense_3_14_test5 = {&keras_dense_3_14_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test5_array[4] = {0}; 
k2c_tensor c_dense_3_14_test5 = {&c_dense_3_14_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_14_input_array[14] = {
+1.56793314e+00f,-1.93514917e+00f,-1.51336311e+00f,+1.44868956e+00f,-1.62426410e+00f,
+5.96092187e-01f,+6.77750354e-01f,-1.60917561e+00f,+1.48180509e+00f,+2.59369457e-01f,
+1.83309500e+00f,-1.50060396e+00f,+3.03683897e-01f,+1.31080078e+00f,}; 
k2c_tensor test6_input_1_14_input = {&test6_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test6_array[4] = {
-2.31474981e-01f,+2.32425198e-01f,-1.80138290e-01f,-1.25867678e-02f,}; 
k2c_tensor keras_dense_3_14_test6 = {&keras_dense_3_14_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test6_array[4] = {0}; 
k2c_tensor c_dense_3_14_test6 = {&c_dense_3_14_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_14_input_array[14] = {
-1.78330254e+00f,+1.71472401e+00f,+6.30757641e-01f,+1.14969598e+00f,+1.68635530e+00f,
+5.02788581e-01f,+2.73697632e-01f,+3.13745439e-01f,-4.28801783e-01f,-3.66696680e-01f,
-1.43840510e+00f,-6.83394899e-01f,+1.21425629e-02f,+2.75968373e-01f,}; 
k2c_tensor test7_input_1_14_input = {&test7_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test7_array[4] = {
-2.23931000e-01f,+1.95546091e-01f,-3.95293117e-01f,+1.26669943e-01f,}; 
k2c_tensor keras_dense_3_14_test7 = {&keras_dense_3_14_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test7_array[4] = {0}; 
k2c_tensor c_dense_3_14_test7 = {&c_dense_3_14_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_14_input_array[14] = {
-1.71382721e+00f,+1.29339672e+00f,+1.78048651e+00f,+1.15096386e+00f,-1.64232205e+00f,
+1.23586203e+00f,-8.59758208e-01f,-5.11327978e-01f,+1.71624992e+00f,-1.60705814e+00f,
-1.70795362e+00f,-1.63572560e+00f,+1.94528876e+00f,+2.60002757e-01f,}; 
k2c_tensor test8_input_1_14_input = {&test8_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test8_array[4] = {
-4.00657445e-01f,+1.25252634e-01f,-1.39632061e-01f,+2.48541147e-01f,}; 
k2c_tensor keras_dense_3_14_test8 = {&keras_dense_3_14_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test8_array[4] = {0}; 
k2c_tensor c_dense_3_14_test8 = {&c_dense_3_14_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_14_input_array[14] = {
+1.12742154e+00f,+1.61251844e-01f,+1.93901832e+00f,-6.61762448e-01f,+1.82289320e+00f,
+5.47218483e-01f,+1.91819404e+00f,-4.76907839e-02f,+1.93558406e+00f,-6.93745882e-01f,
-1.34424144e+00f,-7.00317626e-02f,+1.91811989e+00f,-3.61124616e-01f,}; 
k2c_tensor test9_input_1_14_input = {&test9_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test9_array[4] = {
-3.93992186e-01f,+3.98331851e-01f,-8.85122791e-02f,+2.74140805e-01f,}; 
k2c_tensor keras_dense_3_14_test9 = {&keras_dense_3_14_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test9_array[4] = {0}; 
k2c_tensor c_dense_3_14_test9 = {&c_dense_3_14_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_14_input_array[14] = {
-1.73581817e+00f,-3.08535291e-01f,-1.02548986e+00f,-6.59893253e-02f,+4.45056048e-01f,
+1.49307662e+00f,-1.79611301e+00f,+1.17539913e+00f,+3.50590000e-01f,-1.92117446e-01f,
-1.19350156e+00f,+6.96513282e-01f,-9.94714029e-01f,-1.25839430e+00f,}; 
k2c_tensor test10_input_1_14_input = {&test10_input_1_14_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_14_test10_array[4] = {
-1.14328817e-01f,+1.48450628e-01f,-2.15637937e-01f,+7.69602954e-02f,}; 
k2c_tensor keras_dense_3_14_test10 = {&keras_dense_3_14_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_14_test10_array[4] = {0}; 
k2c_tensor c_dense_3_14_test10 = {&c_dense_3_14_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_xmode(&test1_input_1_14_input,&c_dense_3_14_test1); 
torbeam_EC4_xmode(&test2_input_1_14_input,&c_dense_3_14_test2); 
torbeam_EC4_xmode(&test3_input_1_14_input,&c_dense_3_14_test3); 
torbeam_EC4_xmode(&test4_input_1_14_input,&c_dense_3_14_test4); 
torbeam_EC4_xmode(&test5_input_1_14_input,&c_dense_3_14_test5); 
torbeam_EC4_xmode(&test6_input_1_14_input,&c_dense_3_14_test6); 
torbeam_EC4_xmode(&test7_input_1_14_input,&c_dense_3_14_test7); 
torbeam_EC4_xmode(&test8_input_1_14_input,&c_dense_3_14_test8); 
torbeam_EC4_xmode(&test9_input_1_14_input,&c_dense_3_14_test9); 
torbeam_EC4_xmode(&test10_input_1_14_input,&c_dense_3_14_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_14_test1,&c_dense_3_14_test1); 
errors[1] = maxabs(&keras_dense_3_14_test2,&c_dense_3_14_test2); 
errors[2] = maxabs(&keras_dense_3_14_test3,&c_dense_3_14_test3); 
errors[3] = maxabs(&keras_dense_3_14_test4,&c_dense_3_14_test4); 
errors[4] = maxabs(&keras_dense_3_14_test5,&c_dense_3_14_test5); 
errors[5] = maxabs(&keras_dense_3_14_test6,&c_dense_3_14_test6); 
errors[6] = maxabs(&keras_dense_3_14_test7,&c_dense_3_14_test7); 
errors[7] = maxabs(&keras_dense_3_14_test8,&c_dense_3_14_test8); 
errors[8] = maxabs(&keras_dense_3_14_test9,&c_dense_3_14_test9); 
errors[9] = maxabs(&keras_dense_3_14_test10,&c_dense_3_14_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC4_xmode_terminate(); 
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

