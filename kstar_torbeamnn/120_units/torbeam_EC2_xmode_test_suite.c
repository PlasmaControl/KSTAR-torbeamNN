#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_input_array[14] = {
+1.59511155e+00f,-1.89577575e+00f,-3.31913997e-01f,-5.69974402e-01f,+1.07247443e+00f,
-1.46689596e+00f,+1.98909659e+00f,+3.22531761e-01f,-1.80558246e+00f,+2.29565610e-01f,
-1.33423162e+00f,+7.89142072e-01f,-1.03015712e+00f,+1.66385632e+00f,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test1_array[4] = {
+2.72206038e-01f,-4.88998480e-02f,+1.68848544e-01f,+1.59021571e-01f,}; 
k2c_tensor keras_dense_3_test1 = {&keras_dense_3_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test1_array[4] = {0}; 
k2c_tensor c_dense_3_test1 = {&c_dense_3_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_input_array[14] = {
-1.37889953e+00f,-1.50782551e+00f,+4.46747979e-01f,-1.73135349e+00f,+1.77610538e+00f,
-1.94889868e+00f,-8.70916307e-01f,-7.95154203e-01f,-1.85674569e+00f,+7.44852292e-01f,
+1.02594429e+00f,+1.86537818e+00f,+1.01589795e+00f,+2.72349596e-01f,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test2_array[4] = {
-4.54581790e-02f,+1.14112541e-01f,+1.44224480e-01f,+3.20829861e-02f,}; 
k2c_tensor keras_dense_3_test2 = {&keras_dense_3_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test2_array[4] = {0}; 
k2c_tensor c_dense_3_test2 = {&c_dense_3_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_input_array[14] = {
+5.51819728e-01f,-1.81878058e+00f,-1.95489508e+00f,+1.90406953e+00f,-9.43429117e-01f,
-1.87608093e-01f,+1.16925553e-01f,+1.87884278e+00f,+1.24567778e+00f,-1.17823561e-01f,
-2.01853564e-01f,-2.26885028e-01f,-2.92900301e-01f,+5.22049148e-01f,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test3_array[4] = {
+8.11616331e-02f,-3.00854921e-01f,+1.99996829e-01f,+4.49032709e-02f,}; 
k2c_tensor keras_dense_3_test3 = {&keras_dense_3_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test3_array[4] = {0}; 
k2c_tensor c_dense_3_test3 = {&c_dense_3_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_input_array[14] = {
+1.91810257e+00f,-1.45468859e+00f,+1.63109055e+00f,-8.47289916e-01f,-3.71737041e-02f,
-1.36921062e+00f,+1.62099117e+00f,-2.98421224e-02f,-6.82721241e-01f,-1.37961185e+00f,
+1.26524557e+00f,+8.35416799e-01f,+1.44728486e+00f,+1.37419555e+00f,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test4_array[4] = {
+1.49692237e-01f,+2.84866452e-01f,-1.24590717e-01f,+4.17110801e-01f,}; 
k2c_tensor keras_dense_3_test4 = {&keras_dense_3_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test4_array[4] = {0}; 
k2c_tensor c_dense_3_test4 = {&c_dense_3_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_input_array[14] = {
+3.51514182e-01f,-8.08356553e-01f,-8.69726826e-01f,-6.25415746e-01f,-1.22796067e+00f,
-1.11624261e+00f,+3.12076219e-01f,-8.96158762e-01f,-1.47359277e+00f,+1.89376539e+00f,
-1.37113929e+00f,-1.06071433e+00f,-1.96955556e+00f,-1.82845420e-01f,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test5_array[4] = {
-4.54782834e-03f,-8.52819085e-02f,+2.40356058e-01f,-1.59706082e-02f,}; 
k2c_tensor keras_dense_3_test5 = {&keras_dense_3_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test5_array[4] = {0}; 
k2c_tensor c_dense_3_test5 = {&c_dense_3_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_input_array[14] = {
+1.26842399e+00f,+9.31854841e-01f,+3.76944986e-01f,+1.03638276e+00f,+1.97598657e+00f,
+1.67510020e+00f,+5.90956195e-01f,+1.70715442e-01f,-2.92162945e-01f,+1.87490614e+00f,
-8.12413537e-01f,+3.56352930e-01f,+8.19732359e-01f,-7.08210692e-01f,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test6_array[4] = {
+2.42113154e-02f,+1.74513310e-01f,+7.55312890e-02f,+6.53578192e-02f,}; 
k2c_tensor keras_dense_3_test6 = {&keras_dense_3_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test6_array[4] = {0}; 
k2c_tensor c_dense_3_test6 = {&c_dense_3_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_input_array[14] = {
-4.76228516e-01f,-1.25591527e+00f,+1.71209979e+00f,-6.16751917e-01f,-1.21867842e+00f,
-1.69295040e-02f,-4.03097222e-01f,-1.44451718e+00f,-9.55220912e-02f,+1.42547212e-01f,
+3.48815730e-01f,+1.90818830e+00f,-1.35849082e+00f,+1.37844168e+00f,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test7_array[4] = {
-1.52799994e-01f,-7.64640123e-02f,-9.04534385e-03f,+1.22165374e-01f,}; 
k2c_tensor keras_dense_3_test7 = {&keras_dense_3_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test7_array[4] = {0}; 
k2c_tensor c_dense_3_test7 = {&c_dense_3_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_input_array[14] = {
-1.32336465e+00f,+1.38750393e+00f,+1.78111233e-01f,-1.90246305e+00f,-1.07278393e+00f,
-9.33540017e-02f,+6.94849610e-01f,+6.45558636e-01f,-9.73787770e-01f,-4.92079264e-01f,
+9.65588968e-01f,-4.48652114e-01f,-1.50073492e+00f,-2.92119443e-01f,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test8_array[4] = {
+8.73355120e-02f,+4.98502962e-02f,+2.18466949e-02f,+5.31167872e-02f,}; 
k2c_tensor keras_dense_3_test8 = {&keras_dense_3_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test8_array[4] = {0}; 
k2c_tensor c_dense_3_test8 = {&c_dense_3_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_input_array[14] = {
+2.71271095e-01f,+1.56922851e+00f,-4.77461999e-01f,-2.52781911e-01f,+7.73956975e-01f,
+1.91566217e+00f,-6.92873223e-01f,-1.85389019e+00f,-1.94897077e+00f,-4.25331615e-01f,
-1.59512533e+00f,-3.13649125e-01f,-3.45785043e-01f,-1.40807024e-01f,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test9_array[4] = {
-2.53868680e-02f,+1.84821740e-01f,+1.50375709e-01f,-6.44986928e-02f,}; 
k2c_tensor keras_dense_3_test9 = {&keras_dense_3_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test9_array[4] = {0}; 
k2c_tensor c_dense_3_test9 = {&c_dense_3_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_input_array[14] = {
-1.45193562e+00f,-1.01558163e+00f,-2.99151182e-01f,+4.62222559e-01f,-7.65797472e-01f,
+1.24523475e+00f,-1.78406957e-01f,-7.57586048e-01f,-1.25591928e+00f,-1.43676506e+00f,
-2.94289826e-01f,-2.06877079e-01f,+1.04141402e+00f,-1.04269868e-01f,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_test10_array[4] = {
-7.69202933e-02f,+1.59015387e-01f,-1.03453156e-02f,+9.20495912e-02f,}; 
k2c_tensor keras_dense_3_test10 = {&keras_dense_3_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_test10_array[4] = {0}; 
k2c_tensor c_dense_3_test10 = {&c_dense_3_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_xmode(&test1_input_1_input,&c_dense_3_test1); 
torbeam_EC2_xmode(&test2_input_1_input,&c_dense_3_test2); 
torbeam_EC2_xmode(&test3_input_1_input,&c_dense_3_test3); 
torbeam_EC2_xmode(&test4_input_1_input,&c_dense_3_test4); 
torbeam_EC2_xmode(&test5_input_1_input,&c_dense_3_test5); 
torbeam_EC2_xmode(&test6_input_1_input,&c_dense_3_test6); 
torbeam_EC2_xmode(&test7_input_1_input,&c_dense_3_test7); 
torbeam_EC2_xmode(&test8_input_1_input,&c_dense_3_test8); 
torbeam_EC2_xmode(&test9_input_1_input,&c_dense_3_test9); 
torbeam_EC2_xmode(&test10_input_1_input,&c_dense_3_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_test1,&c_dense_3_test1); 
errors[1] = maxabs(&keras_dense_3_test2,&c_dense_3_test2); 
errors[2] = maxabs(&keras_dense_3_test3,&c_dense_3_test3); 
errors[3] = maxabs(&keras_dense_3_test4,&c_dense_3_test4); 
errors[4] = maxabs(&keras_dense_3_test5,&c_dense_3_test5); 
errors[5] = maxabs(&keras_dense_3_test6,&c_dense_3_test6); 
errors[6] = maxabs(&keras_dense_3_test7,&c_dense_3_test7); 
errors[7] = maxabs(&keras_dense_3_test8,&c_dense_3_test8); 
errors[8] = maxabs(&keras_dense_3_test9,&c_dense_3_test9); 
errors[9] = maxabs(&keras_dense_3_test10,&c_dense_3_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC2_xmode_terminate(); 
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

