#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_7_input_array[14] = {
-4.27684093e-02f,+1.86011101e+00f,+8.23364063e-01f,+1.75306965e+00f,+1.25634679e+00f,
+2.87457611e-01f,+1.28380278e+00f,+1.13033395e+00f,+1.70252491e+00f,+1.45810094e-01f,
+7.54746583e-01f,+8.68181885e-02f,-9.94599892e-01f,+3.36384876e-01f,}; 
k2c_tensor test1_input_1_7_input = {&test1_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test1_array[4] = {
+1.03743076e-01f,-2.44951397e-01f,-3.22470188e-01f,-5.85346296e-03f,}; 
k2c_tensor keras_dense_3_7_test1 = {&keras_dense_3_7_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test1_array[4] = {0}; 
k2c_tensor c_dense_3_7_test1 = {&c_dense_3_7_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_7_input_array[14] = {
+1.50713751e+00f,+6.05897446e-01f,-7.96460358e-01f,-4.03644413e-01f,-6.43147482e-01f,
-1.79098237e+00f,+4.45339464e-01f,-1.29420053e+00f,+4.36848259e-01f,+9.04154052e-01f,
-1.73618344e+00f,-1.39540556e+00f,+5.06070269e-01f,+1.05341058e+00f,}; 
k2c_tensor test2_input_1_7_input = {&test2_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test2_array[4] = {
+6.63394155e-03f,-1.31721631e-01f,-5.30728579e-01f,+1.35113254e-01f,}; 
k2c_tensor keras_dense_3_7_test2 = {&keras_dense_3_7_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test2_array[4] = {0}; 
k2c_tensor c_dense_3_7_test2 = {&c_dense_3_7_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_7_input_array[14] = {
-1.86748888e+00f,-1.14863348e+00f,-1.19811328e+00f,+1.83624996e+00f,-1.63835574e+00f,
+1.38124134e-01f,+5.13134451e-01f,-6.29134614e-01f,-8.48647832e-01f,+1.72656751e+00f,
+7.56465793e-01f,-8.44631708e-01f,+1.82120497e+00f,-4.57681768e-01f,}; 
k2c_tensor test3_input_1_7_input = {&test3_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test3_array[4] = {
-3.32437158e-01f,-4.59171534e-01f,+2.03980848e-01f,+4.88092639e-02f,}; 
k2c_tensor keras_dense_3_7_test3 = {&keras_dense_3_7_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test3_array[4] = {0}; 
k2c_tensor c_dense_3_7_test3 = {&c_dense_3_7_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_7_input_array[14] = {
+1.83074756e+00f,+3.26654847e-01f,+4.93467531e-01f,+1.64515485e+00f,-1.20627560e+00f,
+4.70074948e-01f,+2.94179234e-01f,-1.92293108e+00f,-7.37546967e-01f,+3.91404618e-01f,
-1.31681919e+00f,-1.91303859e-01f,-1.13858027e+00f,-1.19651500e+00f,}; 
k2c_tensor test4_input_1_7_input = {&test4_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test4_array[4] = {
+1.37760252e-01f,-5.39305247e-02f,-2.18276799e-01f,-2.12134868e-01f,}; 
k2c_tensor keras_dense_3_7_test4 = {&keras_dense_3_7_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test4_array[4] = {0}; 
k2c_tensor c_dense_3_7_test4 = {&c_dense_3_7_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_7_input_array[14] = {
+4.03185951e-01f,-1.90108839e+00f,-6.11042037e-01f,-1.97856776e+00f,-1.20464688e+00f,
-8.41494939e-02f,-1.15924820e+00f,-1.34437230e+00f,-5.21898693e-01f,+1.69683024e+00f,
-1.58038431e+00f,-1.34081266e-01f,+7.35281115e-01f,+3.77734320e-01f,}; 
k2c_tensor test5_input_1_7_input = {&test5_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test5_array[4] = {
-2.28588536e-01f,-6.18465245e-01f,-6.11834787e-02f,+2.99203485e-01f,}; 
k2c_tensor keras_dense_3_7_test5 = {&keras_dense_3_7_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test5_array[4] = {0}; 
k2c_tensor c_dense_3_7_test5 = {&c_dense_3_7_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_7_input_array[14] = {
+1.68606499e+00f,-1.91757175e+00f,-1.58999369e+00f,-9.21360153e-01f,+1.29883440e+00f,
-8.65358420e-01f,+1.55095412e+00f,+1.78000904e+00f,-8.77106360e-01f,+8.26274538e-01f,
+1.22543633e+00f,-1.76239110e+00f,-1.59751550e+00f,+1.39382823e-02f,}; 
k2c_tensor test6_input_1_7_input = {&test6_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test6_array[4] = {
+2.26317331e-01f,-2.15688437e-01f,-7.26768196e-01f,+4.97149751e-02f,}; 
k2c_tensor keras_dense_3_7_test6 = {&keras_dense_3_7_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test6_array[4] = {0}; 
k2c_tensor c_dense_3_7_test6 = {&c_dense_3_7_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_7_input_array[14] = {
+1.67698540e+00f,+1.52033497e+00f,+1.15951478e+00f,-1.38838438e+00f,-3.23871578e-03f,
+7.35660851e-01f,+7.92584072e-01f,-1.21120427e+00f,+1.83048183e+00f,-1.13589406e+00f,
-1.37018318e+00f,+1.55747144e+00f,+9.92159471e-01f,-1.65666838e+00f,}; 
k2c_tensor test7_input_1_7_input = {&test7_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test7_array[4] = {
+8.95023495e-02f,-3.25981051e-01f,-3.83043498e-01f,+1.81142345e-01f,}; 
k2c_tensor keras_dense_3_7_test7 = {&keras_dense_3_7_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test7_array[4] = {0}; 
k2c_tensor c_dense_3_7_test7 = {&c_dense_3_7_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_7_input_array[14] = {
-5.52391714e-01f,-1.82413071e+00f,+1.52645524e+00f,-1.81784425e+00f,-1.91604784e+00f,
+1.61021870e+00f,+6.18032298e-01f,+6.96086620e-01f,-3.28975148e-02f,-6.09568302e-01f,
-1.56716654e+00f,-3.99522086e-01f,+1.70263575e+00f,+5.71038886e-01f,}; 
k2c_tensor test8_input_1_7_input = {&test8_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test8_array[4] = {
-3.49041164e-01f,-9.46833730e-01f,-3.34345400e-02f,+3.65213752e-01f,}; 
k2c_tensor keras_dense_3_7_test8 = {&keras_dense_3_7_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test8_array[4] = {0}; 
k2c_tensor c_dense_3_7_test8 = {&c_dense_3_7_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_7_input_array[14] = {
-1.07357445e+00f,-1.98915583e+00f,+4.23004693e-01f,+9.78525384e-01f,+3.47288765e-01f,
-1.19523483e+00f,-1.84931805e+00f,-6.97126947e-01f,-4.72091961e-01f,+1.51949199e+00f,
+6.30649952e-01f,-9.09396407e-01f,-6.68655291e-01f,-1.39076376e+00f,}; 
k2c_tensor test9_input_1_7_input = {&test9_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test9_array[4] = {
+1.31198928e-01f,-1.48465410e-01f,-2.07027063e-01f,-8.11656490e-02f,}; 
k2c_tensor keras_dense_3_7_test9 = {&keras_dense_3_7_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test9_array[4] = {0}; 
k2c_tensor c_dense_3_7_test9 = {&c_dense_3_7_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_7_input_array[14] = {
+1.93352499e+00f,-7.30151584e-01f,+1.34818821e+00f,-1.77552229e+00f,-7.39202385e-01f,
-8.45751663e-01f,-1.53716642e+00f,-4.09337678e-01f,-1.76890690e-01f,-1.04601227e+00f,
-1.67708189e+00f,+4.85172432e-01f,-1.52297798e+00f,+5.92778110e-01f,}; 
k2c_tensor test10_input_1_7_input = {&test10_input_1_7_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_7_test10_array[4] = {
+2.78204262e-01f,+8.36471692e-02f,-1.55196056e-01f,+3.21101360e-02f,}; 
k2c_tensor keras_dense_3_7_test10 = {&keras_dense_3_7_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_7_test10_array[4] = {0}; 
k2c_tensor c_dense_3_7_test10 = {&c_dense_3_7_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_omode(&test1_input_1_7_input,&c_dense_3_7_test1); 
torbeam_EC2_omode(&test2_input_1_7_input,&c_dense_3_7_test2); 
torbeam_EC2_omode(&test3_input_1_7_input,&c_dense_3_7_test3); 
torbeam_EC2_omode(&test4_input_1_7_input,&c_dense_3_7_test4); 
torbeam_EC2_omode(&test5_input_1_7_input,&c_dense_3_7_test5); 
torbeam_EC2_omode(&test6_input_1_7_input,&c_dense_3_7_test6); 
torbeam_EC2_omode(&test7_input_1_7_input,&c_dense_3_7_test7); 
torbeam_EC2_omode(&test8_input_1_7_input,&c_dense_3_7_test8); 
torbeam_EC2_omode(&test9_input_1_7_input,&c_dense_3_7_test9); 
torbeam_EC2_omode(&test10_input_1_7_input,&c_dense_3_7_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_7_test1,&c_dense_3_7_test1); 
errors[1] = maxabs(&keras_dense_3_7_test2,&c_dense_3_7_test2); 
errors[2] = maxabs(&keras_dense_3_7_test3,&c_dense_3_7_test3); 
errors[3] = maxabs(&keras_dense_3_7_test4,&c_dense_3_7_test4); 
errors[4] = maxabs(&keras_dense_3_7_test5,&c_dense_3_7_test5); 
errors[5] = maxabs(&keras_dense_3_7_test6,&c_dense_3_7_test6); 
errors[6] = maxabs(&keras_dense_3_7_test7,&c_dense_3_7_test7); 
errors[7] = maxabs(&keras_dense_3_7_test8,&c_dense_3_7_test8); 
errors[8] = maxabs(&keras_dense_3_7_test9,&c_dense_3_7_test9); 
errors[9] = maxabs(&keras_dense_3_7_test10,&c_dense_3_7_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC2_omode_terminate(); 
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

