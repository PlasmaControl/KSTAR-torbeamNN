#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_16_input_array[14] = {
+2.35157435e-01f,+8.06914861e-01f,+2.83357893e-01f,-2.22711224e-01f,-1.18583421e+00f,
+9.77942538e-02f,-1.97362651e-01f,+2.06055109e-01f,+1.72362379e-01f,-1.86590527e+00f,
-1.42050034e-02f,+5.22278750e-01f,-7.70673520e-02f,+4.01230839e-01f,}; 
k2c_tensor test1_input_1_16_input = {&test1_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test1_array[4] = {
+1.88332647e-01f,+1.36999324e-01f,-1.72017232e-01f,+2.00287029e-01f,}; 
k2c_tensor keras_dense_3_16_test1 = {&keras_dense_3_16_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test1_array[4] = {0}; 
k2c_tensor c_dense_3_16_test1 = {&c_dense_3_16_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_16_input_array[14] = {
+5.90694312e-01f,-1.33430984e+00f,-1.24801897e+00f,+9.12859359e-02f,-1.67061426e+00f,
-1.27449498e+00f,-9.63584090e-01f,+1.97246750e+00f,+4.86500528e-01f,-1.20036989e+00f,
-1.31637624e-01f,-4.76756824e-01f,-1.56412203e+00f,-5.37824965e-01f,}; 
k2c_tensor test2_input_1_16_input = {&test2_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test2_array[4] = {
+3.65537331e-02f,-1.76387265e-01f,-3.16359848e-01f,-1.59474965e-02f,}; 
k2c_tensor keras_dense_3_16_test2 = {&keras_dense_3_16_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test2_array[4] = {0}; 
k2c_tensor c_dense_3_16_test2 = {&c_dense_3_16_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_16_input_array[14] = {
-9.74828549e-01f,-1.35980317e+00f,-1.67121429e+00f,+1.79756265e+00f,+8.39959007e-01f,
-6.97932276e-02f,-1.15978623e+00f,+1.82178415e+00f,-1.77498797e+00f,-3.26403366e-01f,
+4.28183461e-01f,+4.26463605e-01f,-1.89122182e+00f,-1.01725888e+00f,}; 
k2c_tensor test3_input_1_16_input = {&test3_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test3_array[4] = {
+2.39239976e-01f,+3.54347602e-02f,-1.27146572e-01f,+1.30638942e-01f,}; 
k2c_tensor keras_dense_3_16_test3 = {&keras_dense_3_16_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test3_array[4] = {0}; 
k2c_tensor c_dense_3_16_test3 = {&c_dense_3_16_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_16_input_array[14] = {
-1.01984261e+00f,+1.02826987e+00f,+1.89277706e+00f,-4.70200119e-01f,-6.22716787e-01f,
-8.62344215e-01f,-1.08986393e+00f,+7.19105417e-01f,-1.25461147e+00f,-7.25310391e-02f,
-1.83979459e+00f,-1.40175878e+00f,-3.74873890e-01f,-9.36441786e-01f,}; 
k2c_tensor test4_input_1_16_input = {&test4_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test4_array[4] = {
+4.58087772e-01f,-6.24725223e-02f,-9.96005535e-03f,+1.79325983e-01f,}; 
k2c_tensor keras_dense_3_16_test4 = {&keras_dense_3_16_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test4_array[4] = {0}; 
k2c_tensor c_dense_3_16_test4 = {&c_dense_3_16_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_16_input_array[14] = {
-1.15134839e+00f,-2.39745785e-02f,+9.06476324e-01f,+1.02977814e+00f,+1.28404499e+00f,
+1.93616462e+00f,+1.79346988e+00f,+8.31110475e-01f,+1.81685401e+00f,-7.70428815e-01f,
+1.42452136e+00f,-8.02611059e-01f,-7.40407570e-01f,+2.02286510e-01f,}; 
k2c_tensor test5_input_1_16_input = {&test5_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test5_array[4] = {
+4.08614725e-01f,+5.21830320e-01f,-2.26388760e-02f,+3.82864773e-01f,}; 
k2c_tensor keras_dense_3_16_test5 = {&keras_dense_3_16_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test5_array[4] = {0}; 
k2c_tensor c_dense_3_16_test5 = {&c_dense_3_16_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_16_input_array[14] = {
+4.99114687e-01f,-1.96469259e+00f,-1.37373389e+00f,+9.23959749e-01f,-9.49151406e-02f,
-1.49746660e+00f,+1.73619341e+00f,-1.22859407e-01f,+1.16272584e+00f,+1.93068426e+00f,
+1.00006627e+00f,-2.19771809e-01f,+9.57407127e-01f,-1.29023467e+00f,}; 
k2c_tensor test6_input_1_16_input = {&test6_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test6_array[4] = {
+1.40877366e-01f,-3.90682638e-01f,+1.58038124e-01f,+2.61709303e-01f,}; 
k2c_tensor keras_dense_3_16_test6 = {&keras_dense_3_16_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test6_array[4] = {0}; 
k2c_tensor c_dense_3_16_test6 = {&c_dense_3_16_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_16_input_array[14] = {
+1.06036286e+00f,+1.96128400e+00f,-1.94211715e+00f,-1.36633437e+00f,+4.40123382e-01f,
-1.99975818e+00f,-1.41990031e+00f,+3.67810055e-01f,+1.02413875e+00f,-1.11442730e+00f,
+1.28752253e+00f,-8.26863246e-01f,-1.97277695e+00f,-4.43810706e-01f,}; 
k2c_tensor test7_input_1_16_input = {&test7_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test7_array[4] = {
-6.73485473e-02f,+1.15648448e-01f,-4.78634983e-01f,+5.97731285e-02f,}; 
k2c_tensor keras_dense_3_16_test7 = {&keras_dense_3_16_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test7_array[4] = {0}; 
k2c_tensor c_dense_3_16_test7 = {&c_dense_3_16_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_16_input_array[14] = {
-1.24639841e+00f,-1.51028870e+00f,+1.22720749e+00f,+4.89748367e-02f,-6.18460598e-01f,
+1.02047934e+00f,+7.66623560e-01f,+5.60236202e-01f,+7.80627856e-01f,+1.58968044e+00f,
+2.36082292e-01f,+1.76800689e+00f,-1.92944833e+00f,+1.31970114e+00f,}; 
k2c_tensor test8_input_1_16_input = {&test8_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test8_array[4] = {
+3.31780724e-02f,-5.17966971e-02f,-2.77937025e-01f,-1.91405118e-01f,}; 
k2c_tensor keras_dense_3_16_test8 = {&keras_dense_3_16_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test8_array[4] = {0}; 
k2c_tensor c_dense_3_16_test8 = {&c_dense_3_16_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_16_input_array[14] = {
+1.47854574e+00f,-1.64538105e+00f,-3.27682749e-01f,+1.21562688e+00f,-1.32606472e-01f,
-2.27517157e-01f,-1.89479671e+00f,-9.57011690e-01f,-1.97063859e+00f,-8.01167628e-01f,
+1.96747085e+00f,+3.44086475e-01f,-1.77761418e+00f,-1.35982123e+00f,}; 
k2c_tensor test9_input_1_16_input = {&test9_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test9_array[4] = {
+3.07621628e-01f,-1.68228388e-01f,-2.36732051e-01f,-1.75222278e-01f,}; 
k2c_tensor keras_dense_3_16_test9 = {&keras_dense_3_16_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test9_array[4] = {0}; 
k2c_tensor c_dense_3_16_test9 = {&c_dense_3_16_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_16_input_array[14] = {
-1.10724835e+00f,+1.70625707e-01f,-1.32545151e+00f,+3.35139878e-01f,-1.41617051e+00f,
+1.15113544e+00f,-7.12014500e-01f,+1.68675255e-01f,-7.49660942e-01f,+1.32956820e+00f,
+1.69193449e+00f,-9.77981717e-01f,-3.86817397e-02f,-6.90696774e-01f,}; 
k2c_tensor test10_input_1_16_input = {&test10_input_1_16_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_16_test10_array[4] = {
+2.85930127e-01f,+4.03016150e-01f,-1.16263501e-01f,+1.17696904e-01f,}; 
k2c_tensor keras_dense_3_16_test10 = {&keras_dense_3_16_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_16_test10_array[4] = {0}; 
k2c_tensor c_dense_3_16_test10 = {&c_dense_3_16_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_xmode(&test1_input_1_16_input,&c_dense_3_16_test1); 
torbeam_EC5_xmode(&test2_input_1_16_input,&c_dense_3_16_test2); 
torbeam_EC5_xmode(&test3_input_1_16_input,&c_dense_3_16_test3); 
torbeam_EC5_xmode(&test4_input_1_16_input,&c_dense_3_16_test4); 
torbeam_EC5_xmode(&test5_input_1_16_input,&c_dense_3_16_test5); 
torbeam_EC5_xmode(&test6_input_1_16_input,&c_dense_3_16_test6); 
torbeam_EC5_xmode(&test7_input_1_16_input,&c_dense_3_16_test7); 
torbeam_EC5_xmode(&test8_input_1_16_input,&c_dense_3_16_test8); 
torbeam_EC5_xmode(&test9_input_1_16_input,&c_dense_3_16_test9); 
torbeam_EC5_xmode(&test10_input_1_16_input,&c_dense_3_16_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_16_test1,&c_dense_3_16_test1); 
errors[1] = maxabs(&keras_dense_3_16_test2,&c_dense_3_16_test2); 
errors[2] = maxabs(&keras_dense_3_16_test3,&c_dense_3_16_test3); 
errors[3] = maxabs(&keras_dense_3_16_test4,&c_dense_3_16_test4); 
errors[4] = maxabs(&keras_dense_3_16_test5,&c_dense_3_16_test5); 
errors[5] = maxabs(&keras_dense_3_16_test6,&c_dense_3_16_test6); 
errors[6] = maxabs(&keras_dense_3_16_test7,&c_dense_3_16_test7); 
errors[7] = maxabs(&keras_dense_3_16_test8,&c_dense_3_16_test8); 
errors[8] = maxabs(&keras_dense_3_16_test9,&c_dense_3_16_test9); 
errors[9] = maxabs(&keras_dense_3_16_test10,&c_dense_3_16_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC5_xmode_terminate(); 
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

