#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_4_input_array[14] = {
+7.76574344e-01f,-8.49034148e-01f,-1.20642458e+00f,-1.46493775e+00f,+1.03790586e-01f,
+6.76223335e-01f,+1.83751976e+00f,+2.65725772e-01f,+1.60036569e+00f,+7.35065223e-01f,
+1.99121661e+00f,+2.25257921e-01f,+3.57166053e-01f,-2.77460885e-01f,}; 
k2c_tensor test1_input_1_4_input = {&test1_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test1_array[4] = {
+7.03872219e-02f,-1.53068453e-01f,-2.28036731e-01f,+1.13643184e-02f,}; 
k2c_tensor keras_dense_3_4_test1 = {&keras_dense_3_4_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test1_array[4] = {0}; 
k2c_tensor c_dense_3_4_test1 = {&c_dense_3_4_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_4_input_array[14] = {
-5.00088040e-01f,+1.35933296e+00f,+1.23403473e+00f,+4.59327144e-01f,-1.97122013e+00f,
-3.29811485e-01f,-1.10681982e+00f,+6.63228171e-01f,+1.69626488e-02f,+1.27334676e+00f,
-8.64060825e-01f,+6.63580858e-01f,-1.29752674e+00f,+1.89225971e+00f,}; 
k2c_tensor test2_input_1_4_input = {&test2_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test2_array[4] = {
+2.27493327e-02f,+1.95505828e-01f,-2.02767253e-02f,+2.57009923e-01f,}; 
k2c_tensor keras_dense_3_4_test2 = {&keras_dense_3_4_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test2_array[4] = {0}; 
k2c_tensor c_dense_3_4_test2 = {&c_dense_3_4_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_4_input_array[14] = {
+3.28767156e-01f,-1.87781238e+00f,-3.10677349e-01f,+7.43503745e-01f,-1.05313642e+00f,
-5.43404007e-01f,+4.83815433e-01f,+9.77845674e-02f,+1.24726959e+00f,-3.68858439e-01f,
-1.24932763e+00f,-7.51248846e-01f,-1.10933618e+00f,-2.90329174e-01f,}; 
k2c_tensor test3_input_1_4_input = {&test3_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test3_array[4] = {
+1.78973824e-01f,+1.12372331e-01f,+2.45861039e-01f,+1.35896206e-01f,}; 
k2c_tensor keras_dense_3_4_test3 = {&keras_dense_3_4_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test3_array[4] = {0}; 
k2c_tensor c_dense_3_4_test3 = {&c_dense_3_4_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_4_input_array[14] = {
+5.47334219e-01f,-6.47504854e-01f,+1.66457004e+00f,+1.38942604e+00f,+1.74850775e+00f,
+1.82109127e+00f,-1.54975152e+00f,-1.55946112e+00f,-1.11335550e+00f,+1.36887809e-01f,
-3.00908008e-01f,-7.06177062e-01f,+1.88541397e+00f,+2.60916328e-01f,}; 
k2c_tensor test4_input_1_4_input = {&test4_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test4_array[4] = {
+1.48296401e-01f,+3.88885960e-02f,-9.63075086e-02f,+1.34440720e-01f,}; 
k2c_tensor keras_dense_3_4_test4 = {&keras_dense_3_4_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test4_array[4] = {0}; 
k2c_tensor c_dense_3_4_test4 = {&c_dense_3_4_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_4_input_array[14] = {
+4.88212574e-01f,-1.77831164e+00f,+9.25147071e-01f,+4.28052971e-01f,-1.49215872e+00f,
+1.74339890e-01f,+1.26842068e+00f,+2.00426448e-01f,+5.25442853e-01f,+1.71585105e+00f,
-1.93062795e+00f,+1.38075412e+00f,+1.20338211e+00f,+5.15604538e-02f,}; 
k2c_tensor test5_input_1_4_input = {&test5_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test5_array[4] = {
-2.25528240e-01f,+3.54411244e-01f,+2.10687324e-01f,+5.01977727e-02f,}; 
k2c_tensor keras_dense_3_4_test5 = {&keras_dense_3_4_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test5_array[4] = {0}; 
k2c_tensor c_dense_3_4_test5 = {&c_dense_3_4_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_4_input_array[14] = {
-2.65667892e-01f,-9.78971469e-01f,+1.81890450e+00f,+1.38023630e+00f,-1.47069093e+00f,
-1.33866229e+00f,+1.77482281e+00f,-3.00375752e-01f,+4.59001682e-01f,+9.45136416e-01f,
+1.83916652e-01f,-1.77787496e+00f,-1.49320991e+00f,+7.67545220e-01f,}; 
k2c_tensor test6_input_1_4_input = {&test6_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test6_array[4] = {
+5.65747082e-01f,+2.93911278e-01f,+1.06749587e-01f,+1.55848563e-01f,}; 
k2c_tensor keras_dense_3_4_test6 = {&keras_dense_3_4_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test6_array[4] = {0}; 
k2c_tensor c_dense_3_4_test6 = {&c_dense_3_4_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_4_input_array[14] = {
-2.42671158e-02f,-4.21001150e-01f,-3.52932290e-02f,+1.80481034e+00f,+4.48532072e-01f,
-1.54760740e+00f,-6.18548239e-01f,+4.09707382e-01f,+1.81079700e+00f,+8.50777938e-02f,
-1.85120310e+00f,+4.36656076e-01f,+1.39149309e+00f,+3.80550384e-01f,}; 
k2c_tensor test7_input_1_4_input = {&test7_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test7_array[4] = {
+4.54017892e-02f,-1.89126823e-02f,+2.45760262e-01f,+1.35699019e-01f,}; 
k2c_tensor keras_dense_3_4_test7 = {&keras_dense_3_4_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test7_array[4] = {0}; 
k2c_tensor c_dense_3_4_test7 = {&c_dense_3_4_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_4_input_array[14] = {
+1.13598827e+00f,-4.37554639e-01f,+4.89188081e-01f,+1.26677923e+00f,+2.84137790e-01f,
-4.46758381e-01f,+1.90505288e-01f,+1.55728279e+00f,+5.18041150e-01f,-3.18174687e-01f,
-1.87564372e+00f,-7.90136014e-01f,+1.39377870e+00f,+6.24258344e-01f,}; 
k2c_tensor test8_input_1_4_input = {&test8_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test8_array[4] = {
+1.14631757e-01f,-9.35926214e-02f,+2.39293844e-01f,+1.51709244e-01f,}; 
k2c_tensor keras_dense_3_4_test8 = {&keras_dense_3_4_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test8_array[4] = {0}; 
k2c_tensor c_dense_3_4_test8 = {&c_dense_3_4_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_4_input_array[14] = {
-1.17445936e+00f,+1.23877171e+00f,-9.75663255e-01f,-5.72107961e-01f,-1.14622123e+00f,
-8.04869702e-01f,+4.48816207e-01f,+1.80836573e-01f,+1.56894634e+00f,-2.33987045e-02f,
+1.79264803e+00f,+2.54282361e-01f,+4.16076505e-01f,+1.65544217e+00f,}; 
k2c_tensor test9_input_1_4_input = {&test9_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test9_array[4] = {
+1.16769075e-01f,+5.07199615e-02f,+8.17545503e-02f,+1.37201428e-01f,}; 
k2c_tensor keras_dense_3_4_test9 = {&keras_dense_3_4_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test9_array[4] = {0}; 
k2c_tensor c_dense_3_4_test9 = {&c_dense_3_4_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_4_input_array[14] = {
+1.65063829e-01f,+3.06574903e-01f,-1.97338146e+00f,+1.12348912e+00f,+5.58474443e-01f,
+1.57655674e+00f,-9.49931350e-01f,-1.13302986e+00f,-1.29415818e+00f,+6.68666469e-01f,
-1.06878362e-01f,+3.98916122e-01f,-1.80679300e+00f,-6.50181337e-01f,}; 
k2c_tensor test10_input_1_4_input = {&test10_input_1_4_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_4_test10_array[4] = {
+1.15797475e-01f,+2.87368689e-02f,+2.26236507e-02f,+4.73468471e-03f,}; 
k2c_tensor keras_dense_3_4_test10 = {&keras_dense_3_4_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_4_test10_array[4] = {0}; 
k2c_tensor c_dense_3_4_test10 = {&c_dense_3_4_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_xmode(&test1_input_1_4_input,&c_dense_3_4_test1); 
torbeam_EC5_xmode(&test2_input_1_4_input,&c_dense_3_4_test2); 
torbeam_EC5_xmode(&test3_input_1_4_input,&c_dense_3_4_test3); 
torbeam_EC5_xmode(&test4_input_1_4_input,&c_dense_3_4_test4); 
torbeam_EC5_xmode(&test5_input_1_4_input,&c_dense_3_4_test5); 
torbeam_EC5_xmode(&test6_input_1_4_input,&c_dense_3_4_test6); 
torbeam_EC5_xmode(&test7_input_1_4_input,&c_dense_3_4_test7); 
torbeam_EC5_xmode(&test8_input_1_4_input,&c_dense_3_4_test8); 
torbeam_EC5_xmode(&test9_input_1_4_input,&c_dense_3_4_test9); 
torbeam_EC5_xmode(&test10_input_1_4_input,&c_dense_3_4_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_4_test1,&c_dense_3_4_test1); 
errors[1] = maxabs(&keras_dense_3_4_test2,&c_dense_3_4_test2); 
errors[2] = maxabs(&keras_dense_3_4_test3,&c_dense_3_4_test3); 
errors[3] = maxabs(&keras_dense_3_4_test4,&c_dense_3_4_test4); 
errors[4] = maxabs(&keras_dense_3_4_test5,&c_dense_3_4_test5); 
errors[5] = maxabs(&keras_dense_3_4_test6,&c_dense_3_4_test6); 
errors[6] = maxabs(&keras_dense_3_4_test7,&c_dense_3_4_test7); 
errors[7] = maxabs(&keras_dense_3_4_test8,&c_dense_3_4_test8); 
errors[8] = maxabs(&keras_dense_3_4_test9,&c_dense_3_4_test9); 
errors[9] = maxabs(&keras_dense_3_4_test10,&c_dense_3_4_test10); 
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

