#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_21_input_array[14] = {
+3.52942547e-01f,+1.63956833e+00f,-1.65506943e+00f,+1.65254021e+00f,-1.05962529e+00f,
-1.36642134e+00f,+1.90184169e+00f,+7.89918341e-01f,-1.16582535e+00f,-1.65898033e+00f,
-6.02324891e-01f,+1.15182394e+00f,+1.80264306e+00f,+1.17815087e+00f,}; 
k2c_tensor test1_input_1_21_input = {&test1_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test1_array[4] = {
+3.32623512e-01f,-4.06510144e-01f,-9.25729051e-02f,-3.85080367e-01f,}; 
k2c_tensor keras_dense_3_21_test1 = {&keras_dense_3_21_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test1_array[4] = {0}; 
k2c_tensor c_dense_3_21_test1 = {&c_dense_3_21_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_21_input_array[14] = {
+1.65437194e+00f,-1.24954730e+00f,+1.91371815e+00f,-1.81521632e+00f,-8.87378941e-01f,
+7.71582084e-01f,-1.76521424e+00f,+1.67716302e+00f,+1.02668467e+00f,-1.48451306e+00f,
-7.15514766e-01f,-6.34332138e-01f,+1.08530516e+00f,-9.35840476e-01f,}; 
k2c_tensor test2_input_1_21_input = {&test2_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test2_array[4] = {
-2.91606396e-01f,-5.62989056e-01f,+3.20387557e-02f,-9.00036812e-01f,}; 
k2c_tensor keras_dense_3_21_test2 = {&keras_dense_3_21_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test2_array[4] = {0}; 
k2c_tensor c_dense_3_21_test2 = {&c_dense_3_21_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_21_input_array[14] = {
-7.84542030e-01f,+1.18244605e+00f,-7.48563615e-01f,-1.17548499e+00f,-1.10707485e+00f,
+5.83780343e-02f,+6.24901271e-01f,-1.29066204e+00f,+7.77710729e-01f,-1.38070290e-01f,
-4.56408118e-01f,-1.78400813e-01f,+9.89018354e-01f,+1.42656494e+00f,}; 
k2c_tensor test3_input_1_21_input = {&test3_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test3_array[4] = {
-2.32355273e-03f,-4.34790164e-01f,+6.64854795e-02f,-4.11753982e-01f,}; 
k2c_tensor keras_dense_3_21_test3 = {&keras_dense_3_21_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test3_array[4] = {0}; 
k2c_tensor c_dense_3_21_test3 = {&c_dense_3_21_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_21_input_array[14] = {
+1.75215654e+00f,-1.74735850e-02f,-6.29165502e-02f,-1.82062183e+00f,+5.39780623e-06f,
+1.04931335e+00f,+1.02689411e+00f,-9.95915413e-01f,+7.65351682e-02f,-6.31650243e-01f,
+6.39788029e-01f,-1.83164127e+00f,+1.41509354e+00f,-1.05384478e+00f,}; 
k2c_tensor test4_input_1_21_input = {&test4_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test4_array[4] = {
-1.97554916e-01f,-5.70471942e-01f,+9.09372792e-03f,-4.68879372e-01f,}; 
k2c_tensor keras_dense_3_21_test4 = {&keras_dense_3_21_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test4_array[4] = {0}; 
k2c_tensor c_dense_3_21_test4 = {&c_dense_3_21_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_21_input_array[14] = {
-1.84753299e+00f,-1.43332422e+00f,+1.18573930e+00f,+3.44693863e-03f,-1.78721644e+00f,
-9.21137493e-01f,-9.37752937e-01f,-1.04600165e+00f,-1.42816027e+00f,-1.78691288e+00f,
+3.55912265e-01f,-1.72704581e+00f,-2.40430752e-01f,+1.43864466e-01f,}; 
k2c_tensor test5_input_1_21_input = {&test5_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test5_array[4] = {
-3.40963155e-01f,-3.44428122e-01f,-3.66280764e-01f,-7.45990217e-01f,}; 
k2c_tensor keras_dense_3_21_test5 = {&keras_dense_3_21_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test5_array[4] = {0}; 
k2c_tensor c_dense_3_21_test5 = {&c_dense_3_21_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_21_input_array[14] = {
-1.41364569e+00f,+8.65632888e-02f,-2.44674242e-01f,+1.80837757e+00f,+1.88994139e+00f,
+6.43590523e-03f,+2.40892899e-02f,-1.53154569e+00f,+4.32626245e-02f,-1.70351280e+00f,
+1.80758934e+00f,-1.03713927e+00f,-4.78914752e-01f,+9.59232001e-01f,}; 
k2c_tensor test6_input_1_21_input = {&test6_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test6_array[4] = {
+4.77307029e-02f,-2.81787604e-01f,-2.34140158e-01f,-3.46770287e-01f,}; 
k2c_tensor keras_dense_3_21_test6 = {&keras_dense_3_21_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test6_array[4] = {0}; 
k2c_tensor c_dense_3_21_test6 = {&c_dense_3_21_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_21_input_array[14] = {
-4.28701079e-02f,+5.94221730e-02f,+2.09348933e-01f,+9.25927730e-02f,+3.95980482e-01f,
-1.68495330e+00f,-1.82471474e+00f,-8.03402280e-01f,-9.46538102e-01f,-6.94135023e-01f,
+4.85024210e-01f,+1.95771424e+00f,-1.83918748e+00f,+9.74004833e-01f,}; 
k2c_tensor test7_input_1_21_input = {&test7_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test7_array[4] = {
+1.28215313e-01f,+5.69764376e-02f,-5.95654473e-02f,-3.78955394e-01f,}; 
k2c_tensor keras_dense_3_21_test7 = {&keras_dense_3_21_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test7_array[4] = {0}; 
k2c_tensor c_dense_3_21_test7 = {&c_dense_3_21_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_21_input_array[14] = {
+7.33143732e-01f,-3.44102273e-01f,+1.89469894e+00f,+1.55292642e+00f,-4.12069548e-01f,
+1.53300166e+00f,+1.75726352e+00f,+1.85491443e-01f,+4.12948247e-01f,+9.94265020e-01f,
-1.22535584e+00f,-1.71801976e+00f,+5.86317565e-01f,-1.50792785e-01f,}; 
k2c_tensor test8_input_1_21_input = {&test8_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test8_array[4] = {
+5.57088628e-02f,-4.05744523e-01f,-3.33220243e-01f,-2.64550716e-01f,}; 
k2c_tensor keras_dense_3_21_test8 = {&keras_dense_3_21_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test8_array[4] = {0}; 
k2c_tensor c_dense_3_21_test8 = {&c_dense_3_21_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_21_input_array[14] = {
-1.08564809e+00f,+9.74001713e-01f,-5.35308427e-01f,-1.24959226e+00f,-1.35453416e+00f,
+6.70758865e-02f,-6.07397181e-02f,-1.34778628e+00f,+4.97104357e-01f,-6.95835682e-01f,
-6.02206516e-01f,+8.14339686e-01f,+5.10296853e-01f,+8.58253348e-01f,}; 
k2c_tensor test9_input_1_21_input = {&test9_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test9_array[4] = {
-5.64603917e-02f,-3.02716076e-01f,-9.30237845e-02f,-5.04641771e-01f,}; 
k2c_tensor keras_dense_3_21_test9 = {&keras_dense_3_21_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test9_array[4] = {0}; 
k2c_tensor c_dense_3_21_test9 = {&c_dense_3_21_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_21_input_array[14] = {
-1.10049813e+00f,+1.56616703e+00f,-3.56585260e-01f,-4.30458813e-02f,-3.17256616e-01f,
-7.58472328e-01f,-1.27889959e+00f,-4.66850422e-02f,+1.86292945e+00f,-8.97343308e-02f,
-1.88111178e+00f,+3.85134319e-01f,-6.80749901e-01f,-1.46452784e+00f,}; 
k2c_tensor test10_input_1_21_input = {&test10_input_1_21_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_21_test10_array[4] = {
-2.01463401e-01f,-4.34704386e-02f,-1.65605277e-01f,-2.37989292e-01f,}; 
k2c_tensor keras_dense_3_21_test10 = {&keras_dense_3_21_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_21_test10_array[4] = {0}; 
k2c_tensor c_dense_3_21_test10 = {&c_dense_3_21_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_omode(&test1_input_1_21_input,&c_dense_3_21_test1); 
torbeam_EC4_omode(&test2_input_1_21_input,&c_dense_3_21_test2); 
torbeam_EC4_omode(&test3_input_1_21_input,&c_dense_3_21_test3); 
torbeam_EC4_omode(&test4_input_1_21_input,&c_dense_3_21_test4); 
torbeam_EC4_omode(&test5_input_1_21_input,&c_dense_3_21_test5); 
torbeam_EC4_omode(&test6_input_1_21_input,&c_dense_3_21_test6); 
torbeam_EC4_omode(&test7_input_1_21_input,&c_dense_3_21_test7); 
torbeam_EC4_omode(&test8_input_1_21_input,&c_dense_3_21_test8); 
torbeam_EC4_omode(&test9_input_1_21_input,&c_dense_3_21_test9); 
torbeam_EC4_omode(&test10_input_1_21_input,&c_dense_3_21_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_21_test1,&c_dense_3_21_test1); 
errors[1] = maxabs(&keras_dense_3_21_test2,&c_dense_3_21_test2); 
errors[2] = maxabs(&keras_dense_3_21_test3,&c_dense_3_21_test3); 
errors[3] = maxabs(&keras_dense_3_21_test4,&c_dense_3_21_test4); 
errors[4] = maxabs(&keras_dense_3_21_test5,&c_dense_3_21_test5); 
errors[5] = maxabs(&keras_dense_3_21_test6,&c_dense_3_21_test6); 
errors[6] = maxabs(&keras_dense_3_21_test7,&c_dense_3_21_test7); 
errors[7] = maxabs(&keras_dense_3_21_test8,&c_dense_3_21_test8); 
errors[8] = maxabs(&keras_dense_3_21_test9,&c_dense_3_21_test9); 
errors[9] = maxabs(&keras_dense_3_21_test10,&c_dense_3_21_test10); 
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

