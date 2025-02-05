#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_3_input_array[14] = {
-1.65539890e+00f,-9.12412429e-01f,+1.41741751e+00f,-2.87201696e-02f,+1.28884334e+00f,
+1.57434401e+00f,+1.44150385e+00f,-7.00256687e-01f,+1.33081366e+00f,+1.99375172e+00f,
-1.33467157e+00f,-6.20857248e-01f,-1.18416683e+00f,+9.13265794e-01f,}; 
k2c_tensor test1_input_1_3_input = {&test1_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test1_array[4] = {
-6.95064198e-03f,+4.14837226e-02f,+3.46135736e-01f,-1.07999653e-01f,}; 
k2c_tensor keras_dense_3_3_test1 = {&keras_dense_3_3_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test1_array[4] = {0}; 
k2c_tensor c_dense_3_3_test1 = {&c_dense_3_3_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_3_input_array[14] = {
+4.87506947e-01f,-6.93760722e-02f,-2.40414777e-01f,-1.03073887e+00f,+1.12026095e+00f,
-4.31982079e-01f,-7.45914833e-01f,-9.82826222e-01f,-1.51616966e+00f,-1.41486383e-01f,
-6.38110912e-01f,-5.74469477e-01f,+5.01102744e-01f,-1.66802993e+00f,}; 
k2c_tensor test2_input_1_3_input = {&test2_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test2_array[4] = {
+4.72611725e-01f,+8.17874894e-02f,+4.37837750e-01f,-2.92924404e-01f,}; 
k2c_tensor keras_dense_3_3_test2 = {&keras_dense_3_3_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test2_array[4] = {0}; 
k2c_tensor c_dense_3_3_test2 = {&c_dense_3_3_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_3_input_array[14] = {
+1.28621092e+00f,+1.91449887e+00f,+1.20898243e+00f,-4.62189953e-01f,-2.08481623e-01f,
+3.71148523e-01f,-1.34668612e+00f,+9.07040547e-01f,-6.99367494e-01f,+7.50299847e-01f,
-1.26575543e-01f,-7.36309304e-01f,-1.93355528e+00f,+1.50599436e+00f,}; 
k2c_tensor test3_input_1_3_input = {&test3_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test3_array[4] = {
+1.07773542e-01f,+9.37808678e-02f,+1.67746488e-02f,+1.72833651e-01f,}; 
k2c_tensor keras_dense_3_3_test3 = {&keras_dense_3_3_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test3_array[4] = {0}; 
k2c_tensor c_dense_3_3_test3 = {&c_dense_3_3_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_3_input_array[14] = {
-4.41902995e-01f,-3.83929308e-01f,-2.16516941e-02f,+3.16903454e-01f,-1.27927782e+00f,
+1.31303997e+00f,-1.03640872e+00f,-1.34130991e+00f,-1.09039306e+00f,+8.92857978e-01f,
+3.56937065e-01f,-1.13463470e+00f,-1.62491268e+00f,-1.09970998e+00f,}; 
k2c_tensor test4_input_1_3_input = {&test4_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test4_array[4] = {
-1.57897342e-02f,+2.78817583e-02f,+8.80337656e-02f,+2.66499281e-01f,}; 
k2c_tensor keras_dense_3_3_test4 = {&keras_dense_3_3_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test4_array[4] = {0}; 
k2c_tensor c_dense_3_3_test4 = {&c_dense_3_3_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_3_input_array[14] = {
-3.12703081e-01f,-7.39912490e-01f,-7.64932280e-01f,+4.37481974e-01f,+1.39962123e+00f,
+6.45358228e-01f,+1.01757368e+00f,+1.53595547e+00f,+7.62662947e-01f,-4.26672495e-01f,
+5.38575126e-01f,+1.22377204e+00f,+7.93823146e-01f,+1.72453828e+00f,}; 
k2c_tensor test5_input_1_3_input = {&test5_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test5_array[4] = {
+1.05517894e-01f,+1.46459237e-01f,+3.77793163e-01f,-2.99960580e-02f,}; 
k2c_tensor keras_dense_3_3_test5 = {&keras_dense_3_3_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test5_array[4] = {0}; 
k2c_tensor c_dense_3_3_test5 = {&c_dense_3_3_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_3_input_array[14] = {
+2.19169676e-01f,+1.81316814e+00f,-5.60896385e-01f,+1.64169025e+00f,+4.12664403e-01f,
-5.63759241e-01f,+8.58670054e-01f,+8.34342939e-01f,+1.76543525e-01f,+3.85507450e-01f,
-6.91633865e-01f,-3.64188356e-01f,+1.76587145e+00f,-1.08428951e+00f,}; 
k2c_tensor test6_input_1_3_input = {&test6_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test6_array[4] = {
+5.82695678e-02f,+1.06770284e-01f,+2.23017275e-01f,-2.28182361e-01f,}; 
k2c_tensor keras_dense_3_3_test6 = {&keras_dense_3_3_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test6_array[4] = {0}; 
k2c_tensor c_dense_3_3_test6 = {&c_dense_3_3_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_3_input_array[14] = {
-1.64080777e-01f,-3.65520830e-01f,+1.80650789e+00f,+4.90039320e-01f,+1.23993879e+00f,
+8.14064565e-03f,-1.04017852e+00f,-6.47651784e-01f,+1.53961130e+00f,+8.72604469e-01f,
+1.11314458e+00f,+1.29360014e-01f,-6.98023523e-01f,+1.66102962e+00f,}; 
k2c_tensor test7_input_1_3_input = {&test7_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test7_array[4] = {
+1.73003096e-02f,+1.98109418e-01f,+1.45698771e-01f,-1.67855799e-01f,}; 
k2c_tensor keras_dense_3_3_test7 = {&keras_dense_3_3_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test7_array[4] = {0}; 
k2c_tensor c_dense_3_3_test7 = {&c_dense_3_3_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_3_input_array[14] = {
-3.17021650e-01f,-7.89354899e-01f,+1.89392930e+00f,+8.01910658e-01f,+1.11414195e+00f,
+5.12502566e-01f,+1.49173670e+00f,+1.90648360e+00f,+9.45008920e-01f,+1.76134767e+00f,
-8.24526343e-01f,+1.67818583e+00f,+1.05743823e+00f,-1.01550292e+00f,}; 
k2c_tensor test8_input_1_3_input = {&test8_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test8_array[4] = {
+3.78848374e-01f,+1.28773451e-01f,+5.69451690e-01f,-1.99678674e-01f,}; 
k2c_tensor keras_dense_3_3_test8 = {&keras_dense_3_3_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test8_array[4] = {0}; 
k2c_tensor c_dense_3_3_test8 = {&c_dense_3_3_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_3_input_array[14] = {
+7.29439037e-01f,+1.56300791e+00f,+1.59168039e+00f,-9.45858653e-01f,+1.64624108e-01f,
-1.98668512e+00f,+1.47741101e+00f,+1.78500537e+00f,+1.64892035e+00f,+1.05981847e+00f,
-1.60813560e+00f,+1.82373395e+00f,+1.08462241e-01f,+7.16648695e-01f,}; 
k2c_tensor test9_input_1_3_input = {&test9_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test9_array[4] = {
+7.53250420e-02f,+3.60213578e-01f,+4.52804923e-01f,+2.78977007e-02f,}; 
k2c_tensor keras_dense_3_3_test9 = {&keras_dense_3_3_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test9_array[4] = {0}; 
k2c_tensor c_dense_3_3_test9 = {&c_dense_3_3_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_3_input_array[14] = {
+1.84082016e+00f,-1.15293770e+00f,+1.24138327e+00f,+1.18425497e+00f,-7.14832298e-01f,
-8.22385168e-01f,-1.38470720e+00f,-6.69702573e-01f,-1.42333767e+00f,+1.11796685e+00f,
-1.96694251e-01f,-1.17153088e+00f,-1.38951458e+00f,-1.69665812e+00f,}; 
k2c_tensor test10_input_1_3_input = {&test10_input_1_3_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_3_test10_array[4] = {
+2.96516567e-01f,+1.00893877e-01f,+4.78335440e-01f,-1.11827485e-01f,}; 
k2c_tensor keras_dense_3_3_test10 = {&keras_dense_3_3_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_3_test10_array[4] = {0}; 
k2c_tensor c_dense_3_3_test10 = {&c_dense_3_3_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_omode(&test1_input_1_3_input,&c_dense_3_3_test1); 
torbeam_EC4_omode(&test2_input_1_3_input,&c_dense_3_3_test2); 
torbeam_EC4_omode(&test3_input_1_3_input,&c_dense_3_3_test3); 
torbeam_EC4_omode(&test4_input_1_3_input,&c_dense_3_3_test4); 
torbeam_EC4_omode(&test5_input_1_3_input,&c_dense_3_3_test5); 
torbeam_EC4_omode(&test6_input_1_3_input,&c_dense_3_3_test6); 
torbeam_EC4_omode(&test7_input_1_3_input,&c_dense_3_3_test7); 
torbeam_EC4_omode(&test8_input_1_3_input,&c_dense_3_3_test8); 
torbeam_EC4_omode(&test9_input_1_3_input,&c_dense_3_3_test9); 
torbeam_EC4_omode(&test10_input_1_3_input,&c_dense_3_3_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_3_test1,&c_dense_3_3_test1); 
errors[1] = maxabs(&keras_dense_3_3_test2,&c_dense_3_3_test2); 
errors[2] = maxabs(&keras_dense_3_3_test3,&c_dense_3_3_test3); 
errors[3] = maxabs(&keras_dense_3_3_test4,&c_dense_3_3_test4); 
errors[4] = maxabs(&keras_dense_3_3_test5,&c_dense_3_3_test5); 
errors[5] = maxabs(&keras_dense_3_3_test6,&c_dense_3_3_test6); 
errors[6] = maxabs(&keras_dense_3_3_test7,&c_dense_3_3_test7); 
errors[7] = maxabs(&keras_dense_3_3_test8,&c_dense_3_3_test8); 
errors[8] = maxabs(&keras_dense_3_3_test9,&c_dense_3_3_test9); 
errors[9] = maxabs(&keras_dense_3_3_test10,&c_dense_3_3_test10); 
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

