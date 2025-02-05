#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_12_input_array[14] = {
-1.46484740e+00f,-1.87085710e+00f,+8.07686800e-01f,-3.31340163e-01f,-8.24835752e-01f,
-9.58724196e-01f,+2.02091464e-01f,-1.27237023e+00f,+9.32222422e-01f,+6.76365922e-01f,
-1.05136929e+00f,+1.25636161e+00f,-5.91219818e-01f,-9.78658897e-02f,}; 
k2c_tensor test1_input_1_12_input = {&test1_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test1_array[4] = {
+7.48219118e-02f,+7.70030767e-02f,+2.41128236e-01f,-1.07054180e-02f,}; 
k2c_tensor keras_dense_3_12_test1 = {&keras_dense_3_12_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test1_array[4] = {0}; 
k2c_tensor c_dense_3_12_test1 = {&c_dense_3_12_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_12_input_array[14] = {
-1.01320420e+00f,+1.04519108e+00f,-4.44794981e-01f,+1.32952776e+00f,-1.24831111e+00f,
-7.39667600e-01f,+1.19701767e+00f,-1.24193651e+00f,-8.39702830e-01f,-1.90519543e-01f,
+5.32140710e-01f,+1.15534055e+00f,+2.17749940e-01f,-1.75124017e+00f,}; 
k2c_tensor test2_input_1_12_input = {&test2_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test2_array[4] = {
+1.71897143e-01f,-5.61189391e-02f,+4.26507473e-01f,+1.07187003e-01f,}; 
k2c_tensor keras_dense_3_12_test2 = {&keras_dense_3_12_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test2_array[4] = {0}; 
k2c_tensor c_dense_3_12_test2 = {&c_dense_3_12_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_12_input_array[14] = {
-8.17546486e-01f,+1.54360011e+00f,-1.18083066e+00f,+2.91963817e-01f,-1.76993386e+00f,
+1.91788653e+00f,-3.51310630e-01f,-1.08489417e+00f,+6.68140695e-01f,-1.69511818e+00f,
-1.07089442e+00f,+1.08062511e+00f,-4.66249643e-01f,+1.14226893e+00f,}; 
k2c_tensor test3_input_1_12_input = {&test3_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test3_array[4] = {
+3.58890891e-01f,+3.08564901e-02f,+2.33643517e-01f,-1.70966595e-01f,}; 
k2c_tensor keras_dense_3_12_test3 = {&keras_dense_3_12_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test3_array[4] = {0}; 
k2c_tensor c_dense_3_12_test3 = {&c_dense_3_12_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_12_input_array[14] = {
+6.33467555e-01f,+1.72453117e+00f,+1.28958808e+00f,+1.30781086e+00f,-2.98397710e-01f,
+6.48827168e-01f,+5.13408719e-01f,+1.18121032e+00f,+4.55989584e-01f,-4.42697579e-01f,
+1.97453952e+00f,+1.23682579e+00f,+5.56133712e-01f,-1.43625515e+00f,}; 
k2c_tensor test4_input_1_12_input = {&test4_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test4_array[4] = {
+2.68437028e-01f,+1.25521198e-01f,+6.60767555e-01f,-6.98401704e-02f,}; 
k2c_tensor keras_dense_3_12_test4 = {&keras_dense_3_12_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test4_array[4] = {0}; 
k2c_tensor c_dense_3_12_test4 = {&c_dense_3_12_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_12_input_array[14] = {
+5.09368169e-01f,-1.53147389e+00f,-2.95090786e-01f,+5.69492068e-01f,+1.74809391e+00f,
+1.51933108e-01f,-9.50770232e-01f,+1.14451060e+00f,+1.54234732e+00f,+1.46253260e+00f,
+1.75303780e-01f,+6.58812671e-01f,-3.38322468e-01f,+1.72819293e+00f,}; 
k2c_tensor test5_input_1_12_input = {&test5_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test5_array[4] = {
+1.20364539e-01f,+9.26881954e-02f,+1.04398295e-01f,-8.15220326e-02f,}; 
k2c_tensor keras_dense_3_12_test5 = {&keras_dense_3_12_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test5_array[4] = {0}; 
k2c_tensor c_dense_3_12_test5 = {&c_dense_3_12_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_12_input_array[14] = {
-6.39905086e-01f,+1.29516721e+00f,+3.90739738e-01f,+1.11191588e+00f,+7.55818886e-01f,
+6.51521826e-02f,-3.97061694e-01f,-6.12511488e-01f,-1.93963189e+00f,-4.02853193e-01f,
-7.33463010e-01f,+3.28113965e-01f,-1.47959933e+00f,-4.23719465e-01f,}; 
k2c_tensor test6_input_1_12_input = {&test6_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test6_array[4] = {
+2.94297814e-01f,-2.06415400e-01f,+2.45184556e-01f,+1.18009217e-01f,}; 
k2c_tensor keras_dense_3_12_test6 = {&keras_dense_3_12_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test6_array[4] = {0}; 
k2c_tensor c_dense_3_12_test6 = {&c_dense_3_12_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_12_input_array[14] = {
-1.88196483e+00f,+1.07966761e+00f,-8.00754148e-01f,+1.72287688e+00f,+6.39972610e-01f,
-1.53665817e+00f,+2.01241437e-01f,+1.74415658e+00f,+3.19850382e-01f,-2.88950045e-01f,
+6.86493274e-01f,-2.86955116e-01f,+1.95096008e+00f,+1.70324925e+00f,}; 
k2c_tensor test7_input_1_12_input = {&test7_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test7_array[4] = {
+1.09720426e-02f,-2.01074537e-02f,+5.46688557e-01f,-1.09813944e-01f,}; 
k2c_tensor keras_dense_3_12_test7 = {&keras_dense_3_12_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test7_array[4] = {0}; 
k2c_tensor c_dense_3_12_test7 = {&c_dense_3_12_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_12_input_array[14] = {
-1.77108703e+00f,+6.67701848e-01f,-6.87240662e-01f,+1.01276486e+00f,+1.16601394e+00f,
-1.35731151e+00f,+1.17817574e+00f,+1.39543086e-01f,+7.85925598e-01f,-2.05105613e-01f,
-1.56825737e+00f,+1.20415385e+00f,-1.07064009e+00f,+2.88553331e-01f,}; 
k2c_tensor test8_input_1_12_input = {&test8_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test8_array[4] = {
+5.19345962e-02f,+1.01143599e-01f,+9.91434082e-02f,+8.12008902e-02f,}; 
k2c_tensor keras_dense_3_12_test8 = {&keras_dense_3_12_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test8_array[4] = {0}; 
k2c_tensor c_dense_3_12_test8 = {&c_dense_3_12_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_12_input_array[14] = {
-1.25178888e+00f,-6.50821031e-01f,+1.79112092e+00f,-1.01481363e+00f,-9.10709363e-01f,
-5.74394197e-01f,-4.86386026e-01f,-1.39548255e+00f,-1.94047388e+00f,-9.38505378e-02f,
+1.71714923e+00f,-1.58242114e+00f,-1.55628714e+00f,-9.13731537e-01f,}; 
k2c_tensor test9_input_1_12_input = {&test9_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test9_array[4] = {
+2.60952681e-01f,+2.79492121e-02f,+7.19798148e-01f,-1.55279905e-01f,}; 
k2c_tensor keras_dense_3_12_test9 = {&keras_dense_3_12_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test9_array[4] = {0}; 
k2c_tensor c_dense_3_12_test9 = {&c_dense_3_12_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_12_input_array[14] = {
-2.58759851e-01f,-3.88041136e-01f,-1.39848588e+00f,-6.93565398e-01f,-1.14234240e+00f,
-7.99708548e-01f,+5.70793251e-01f,+1.56973569e+00f,-6.63898942e-01f,+6.44804506e-01f,
-4.21509321e-01f,+1.18502846e+00f,-1.63460780e+00f,-7.55161742e-01f,}; 
k2c_tensor test10_input_1_12_input = {&test10_input_1_12_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_12_test10_array[4] = {
+3.02280724e-01f,-9.42587107e-02f,+2.97501624e-01f,+2.18023255e-01f,}; 
k2c_tensor keras_dense_3_12_test10 = {&keras_dense_3_12_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_12_test10_array[4] = {0}; 
k2c_tensor c_dense_3_12_test10 = {&c_dense_3_12_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_xmode(&test1_input_1_12_input,&c_dense_3_12_test1); 
torbeam_EC2_xmode(&test2_input_1_12_input,&c_dense_3_12_test2); 
torbeam_EC2_xmode(&test3_input_1_12_input,&c_dense_3_12_test3); 
torbeam_EC2_xmode(&test4_input_1_12_input,&c_dense_3_12_test4); 
torbeam_EC2_xmode(&test5_input_1_12_input,&c_dense_3_12_test5); 
torbeam_EC2_xmode(&test6_input_1_12_input,&c_dense_3_12_test6); 
torbeam_EC2_xmode(&test7_input_1_12_input,&c_dense_3_12_test7); 
torbeam_EC2_xmode(&test8_input_1_12_input,&c_dense_3_12_test8); 
torbeam_EC2_xmode(&test9_input_1_12_input,&c_dense_3_12_test9); 
torbeam_EC2_xmode(&test10_input_1_12_input,&c_dense_3_12_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_12_test1,&c_dense_3_12_test1); 
errors[1] = maxabs(&keras_dense_3_12_test2,&c_dense_3_12_test2); 
errors[2] = maxabs(&keras_dense_3_12_test3,&c_dense_3_12_test3); 
errors[3] = maxabs(&keras_dense_3_12_test4,&c_dense_3_12_test4); 
errors[4] = maxabs(&keras_dense_3_12_test5,&c_dense_3_12_test5); 
errors[5] = maxabs(&keras_dense_3_12_test6,&c_dense_3_12_test6); 
errors[6] = maxabs(&keras_dense_3_12_test7,&c_dense_3_12_test7); 
errors[7] = maxabs(&keras_dense_3_12_test8,&c_dense_3_12_test8); 
errors[8] = maxabs(&keras_dense_3_12_test9,&c_dense_3_12_test9); 
errors[9] = maxabs(&keras_dense_3_12_test10,&c_dense_3_12_test10); 
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

