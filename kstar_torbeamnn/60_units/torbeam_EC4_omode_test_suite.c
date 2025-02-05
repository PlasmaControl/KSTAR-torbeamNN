#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_9_input_array[14] = {
+3.95186215e-01f,+1.50420717e+00f,+1.36483666e+00f,-1.33200224e+00f,-8.88974199e-01f,
+1.01757989e+00f,-1.35868391e-01f,-4.81242098e-01f,+1.95571619e+00f,-1.19348123e+00f,
-1.03421784e+00f,-1.41855234e-01f,-1.92885489e+00f,-3.78523898e-01f,}; 
k2c_tensor test1_input_1_9_input = {&test1_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test1_array[4] = {
-1.35327727e-01f,-2.07784250e-01f,-3.89457643e-01f,+6.58330992e-02f,}; 
k2c_tensor keras_dense_3_9_test1 = {&keras_dense_3_9_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test1_array[4] = {0}; 
k2c_tensor c_dense_3_9_test1 = {&c_dense_3_9_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_9_input_array[14] = {
+9.32738375e-01f,+1.35371883e+00f,-7.98455206e-01f,-1.05005200e+00f,+7.48040324e-01f,
+1.56141474e+00f,+5.14581522e-01f,-1.45925696e-01f,+1.22143923e+00f,-1.10247653e+00f,
+9.52545333e-01f,+1.17241541e+00f,+2.56922625e-01f,-1.77310351e+00f,}; 
k2c_tensor test2_input_1_9_input = {&test2_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test2_array[4] = {
+2.19600238e-02f,-2.01213047e-01f,-1.51451290e-01f,-1.01430669e-01f,}; 
k2c_tensor keras_dense_3_9_test2 = {&keras_dense_3_9_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test2_array[4] = {0}; 
k2c_tensor c_dense_3_9_test2 = {&c_dense_3_9_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_9_input_array[14] = {
+1.81787987e+00f,+1.51789066e+00f,-2.65550042e-01f,+3.55756050e-01f,-1.97626616e+00f,
-7.89631460e-01f,+7.94319416e-01f,+1.64161533e+00f,+1.45082171e+00f,+9.31966839e-01f,
+1.06971090e+00f,-1.65477744e+00f,+1.40558866e+00f,+2.23527180e-01f,}; 
k2c_tensor test3_input_1_9_input = {&test3_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test3_array[4] = {
-2.35617980e-01f,-5.54625392e-02f,-3.43851224e-02f,-1.34388179e-01f,}; 
k2c_tensor keras_dense_3_9_test3 = {&keras_dense_3_9_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test3_array[4] = {0}; 
k2c_tensor c_dense_3_9_test3 = {&c_dense_3_9_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_9_input_array[14] = {
-1.28768161e+00f,+1.29238151e+00f,-1.09261504e+00f,+5.59219712e-01f,+1.06404455e+00f,
-5.28676078e-03f,-3.90469269e-01f,-1.98889466e+00f,-7.87775998e-01f,+1.78024421e+00f,
+1.74251696e-01f,+1.78213147e+00f,-1.63912398e+00f,-7.47172606e-01f,}; 
k2c_tensor test4_input_1_9_input = {&test4_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test4_array[4] = {
+1.68524697e-01f,-6.22099459e-01f,-3.57535221e-02f,-2.78356791e-01f,}; 
k2c_tensor keras_dense_3_9_test4 = {&keras_dense_3_9_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test4_array[4] = {0}; 
k2c_tensor c_dense_3_9_test4 = {&c_dense_3_9_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_9_input_array[14] = {
+1.93756107e+00f,+1.35509237e+00f,+1.51137782e+00f,+1.30344354e+00f,-1.94074316e-01f,
-4.85545926e-01f,+1.37790700e+00f,-7.43551277e-01f,+1.87667863e+00f,+8.41736622e-01f,
+9.77132105e-01f,+5.05132755e-01f,-2.14078257e-01f,+1.55853310e+00f,}; 
k2c_tensor test5_input_1_9_input = {&test5_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test5_array[4] = {
-2.49432418e-02f,-1.03336573e-01f,-1.03335440e-01f,-2.00443670e-01f,}; 
k2c_tensor keras_dense_3_9_test5 = {&keras_dense_3_9_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test5_array[4] = {0}; 
k2c_tensor c_dense_3_9_test5 = {&c_dense_3_9_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_9_input_array[14] = {
+1.10824007e+00f,-1.37788965e+00f,+2.07142057e-01f,+1.35215479e+00f,+4.87547704e-01f,
-1.86344920e+00f,-1.46378602e+00f,-1.81907639e+00f,-1.50171258e+00f,+6.67702787e-01f,
-1.68327777e+00f,-1.16859498e+00f,-1.15268375e+00f,-1.46570990e+00f,}; 
k2c_tensor test6_input_1_9_input = {&test6_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test6_array[4] = {
+2.26778999e-01f,-1.95218101e-01f,+3.63641791e-02f,-4.49858785e-01f,}; 
k2c_tensor keras_dense_3_9_test6 = {&keras_dense_3_9_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test6_array[4] = {0}; 
k2c_tensor c_dense_3_9_test6 = {&c_dense_3_9_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_9_input_array[14] = {
-1.83044956e+00f,-1.40827259e+00f,+1.01856874e+00f,+8.19226668e-01f,+1.56281670e+00f,
+2.03619298e-01f,+9.36468930e-01f,-1.26994643e+00f,+1.90242662e+00f,-1.26099573e+00f,
-7.01543985e-01f,-6.96049661e-01f,-1.23228942e+00f,-9.93333001e-02f,}; 
k2c_tensor test7_input_1_9_input = {&test7_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test7_array[4] = {
+4.78856117e-02f,-3.32818776e-02f,-1.82097465e-01f,-2.56343782e-01f,}; 
k2c_tensor keras_dense_3_9_test7 = {&keras_dense_3_9_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test7_array[4] = {0}; 
k2c_tensor c_dense_3_9_test7 = {&c_dense_3_9_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_9_input_array[14] = {
+1.94576088e+00f,+1.83041762e+00f,-1.68794450e+00f,+1.82213374e+00f,+1.52532413e+00f,
-1.04917566e+00f,+1.38055914e+00f,+5.90701027e-01f,+4.54109982e-01f,-1.88607653e+00f,
-1.77865779e+00f,-4.77510110e-01f,+1.27960637e+00f,-2.90179170e-01f,}; 
k2c_tensor test8_input_1_9_input = {&test8_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test8_array[4] = {
+6.57739118e-02f,-1.00143641e-01f,-5.46022095e-02f,+9.86075774e-02f,}; 
k2c_tensor keras_dense_3_9_test8 = {&keras_dense_3_9_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test8_array[4] = {0}; 
k2c_tensor c_dense_3_9_test8 = {&c_dense_3_9_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_9_input_array[14] = {
+1.97663020e+00f,+1.75305472e+00f,+1.89769474e+00f,-2.63176046e-01f,+1.58409277e+00f,
-8.53035679e-01f,-2.37486992e-01f,-6.13324344e-01f,-5.71602743e-01f,+1.38547875e+00f,
+1.10998183e+00f,+1.40178085e+00f,+1.40733894e+00f,+5.38225017e-01f,}; 
k2c_tensor test9_input_1_9_input = {&test9_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test9_array[4] = {
-2.78000355e-01f,+1.64733753e-01f,-8.56382772e-02f,+9.95950252e-02f,}; 
k2c_tensor keras_dense_3_9_test9 = {&keras_dense_3_9_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test9_array[4] = {0}; 
k2c_tensor c_dense_3_9_test9 = {&c_dense_3_9_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_9_input_array[14] = {
+1.99847134e-01f,-1.85306613e+00f,-1.39162935e+00f,+1.98509825e+00f,-3.15422264e-02f,
-1.81839216e+00f,+3.85621390e-01f,+3.14050507e-01f,-1.50024457e+00f,+4.02304930e-01f,
-1.04309899e+00f,+1.55119579e+00f,+6.14646896e-01f,+1.72871788e+00f,}; 
k2c_tensor test10_input_1_9_input = {&test10_input_1_9_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_9_test10_array[4] = {
-1.67142630e-01f,+1.39798969e-01f,+7.44904950e-02f,-1.06073998e-01f,}; 
k2c_tensor keras_dense_3_9_test10 = {&keras_dense_3_9_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_9_test10_array[4] = {0}; 
k2c_tensor c_dense_3_9_test10 = {&c_dense_3_9_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_omode(&test1_input_1_9_input,&c_dense_3_9_test1); 
torbeam_EC4_omode(&test2_input_1_9_input,&c_dense_3_9_test2); 
torbeam_EC4_omode(&test3_input_1_9_input,&c_dense_3_9_test3); 
torbeam_EC4_omode(&test4_input_1_9_input,&c_dense_3_9_test4); 
torbeam_EC4_omode(&test5_input_1_9_input,&c_dense_3_9_test5); 
torbeam_EC4_omode(&test6_input_1_9_input,&c_dense_3_9_test6); 
torbeam_EC4_omode(&test7_input_1_9_input,&c_dense_3_9_test7); 
torbeam_EC4_omode(&test8_input_1_9_input,&c_dense_3_9_test8); 
torbeam_EC4_omode(&test9_input_1_9_input,&c_dense_3_9_test9); 
torbeam_EC4_omode(&test10_input_1_9_input,&c_dense_3_9_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_9_test1,&c_dense_3_9_test1); 
errors[1] = maxabs(&keras_dense_3_9_test2,&c_dense_3_9_test2); 
errors[2] = maxabs(&keras_dense_3_9_test3,&c_dense_3_9_test3); 
errors[3] = maxabs(&keras_dense_3_9_test4,&c_dense_3_9_test4); 
errors[4] = maxabs(&keras_dense_3_9_test5,&c_dense_3_9_test5); 
errors[5] = maxabs(&keras_dense_3_9_test6,&c_dense_3_9_test6); 
errors[6] = maxabs(&keras_dense_3_9_test7,&c_dense_3_9_test7); 
errors[7] = maxabs(&keras_dense_3_9_test8,&c_dense_3_9_test8); 
errors[8] = maxabs(&keras_dense_3_9_test9,&c_dense_3_9_test9); 
errors[9] = maxabs(&keras_dense_3_9_test10,&c_dense_3_9_test10); 
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

