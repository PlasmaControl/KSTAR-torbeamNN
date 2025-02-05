#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_2_input_array[14] = {
+1.11384227e+00f,+1.34879054e+00f,+1.81771087e+00f,+5.04921146e-01f,+1.83546922e+00f,
-5.61912947e-01f,-4.13279262e-01f,+1.35954270e+00f,-9.08329129e-01f,-1.22492295e+00f,
-6.69957473e-01f,+1.79024807e-01f,-7.81381797e-01f,+1.36681946e+00f,}; 
k2c_tensor test1_input_1_2_input = {&test1_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test1_array[4] = {
-1.89835474e-01f,+2.08642650e-02f,-1.79150522e-01f,+1.81323975e-01f,}; 
k2c_tensor keras_dense_3_2_test1 = {&keras_dense_3_2_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test1_array[4] = {0}; 
k2c_tensor c_dense_3_2_test1 = {&c_dense_3_2_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_2_input_array[14] = {
+1.51564272e-01f,+1.66054974e+00f,-2.49142292e-01f,-1.86484356e+00f,+5.00194274e-01f,
-1.24230626e+00f,-1.38827189e+00f,-1.95721004e+00f,-6.34728668e-01f,-1.22217767e-02f,
-1.26803911e+00f,+1.44264577e+00f,-7.77445534e-01f,-8.80242434e-01f,}; 
k2c_tensor test2_input_1_2_input = {&test2_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test2_array[4] = {
-1.56094767e-02f,+1.53653741e-01f,-1.70579448e-01f,-4.20347564e-02f,}; 
k2c_tensor keras_dense_3_2_test2 = {&keras_dense_3_2_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test2_array[4] = {0}; 
k2c_tensor c_dense_3_2_test2 = {&c_dense_3_2_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_2_input_array[14] = {
-1.04164471e+00f,-9.74274199e-01f,+1.83417458e+00f,+3.87490443e-01f,+8.20115441e-01f,
+1.84445319e+00f,-3.76034130e-01f,-1.91843680e+00f,+5.40057879e-01f,-7.41184895e-01f,
+1.92005091e+00f,-1.31104989e-01f,-1.43049439e+00f,+1.02373163e+00f,}; 
k2c_tensor test3_input_1_2_input = {&test3_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test3_array[4] = {
-1.55168638e-01f,+5.82028776e-02f,-1.94458187e-01f,+2.45408788e-01f,}; 
k2c_tensor keras_dense_3_2_test3 = {&keras_dense_3_2_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test3_array[4] = {0}; 
k2c_tensor c_dense_3_2_test3 = {&c_dense_3_2_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_2_input_array[14] = {
+1.57662466e+00f,-1.07125320e+00f,-9.04777639e-01f,-1.15564628e+00f,+1.53978610e+00f,
-3.98889205e-01f,-5.72290774e-02f,-2.24511115e-01f,-1.71947785e+00f,-1.54786398e+00f,
-1.18906471e+00f,+1.62526387e+00f,+7.24270383e-01f,-7.95286303e-01f,}; 
k2c_tensor test4_input_1_2_input = {&test4_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test4_array[4] = {
-1.60043538e-01f,-4.09068130e-02f,-8.12232867e-02f,+7.10291043e-02f,}; 
k2c_tensor keras_dense_3_2_test4 = {&keras_dense_3_2_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test4_array[4] = {0}; 
k2c_tensor c_dense_3_2_test4 = {&c_dense_3_2_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_2_input_array[14] = {
-1.73762606e+00f,-1.76193031e-01f,+1.66736871e+00f,+1.73963946e+00f,-4.23743871e-03f,
+1.74452993e-01f,+1.43613626e+00f,+1.79278882e+00f,+1.52985939e+00f,+1.05268902e+00f,
+1.26420669e+00f,+1.65901658e+00f,+1.84532938e+00f,-8.10079193e-01f,}; 
k2c_tensor test5_input_1_2_input = {&test5_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test5_array[4] = {
-3.66196111e-02f,-3.59019876e-01f,+2.28596151e-01f,-4.45942907e-03f,}; 
k2c_tensor keras_dense_3_2_test5 = {&keras_dense_3_2_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test5_array[4] = {0}; 
k2c_tensor c_dense_3_2_test5 = {&c_dense_3_2_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_2_input_array[14] = {
+9.96836972e-01f,-5.30647584e-01f,+2.63182051e-02f,+1.29862314e+00f,+1.02461244e+00f,
+1.47354815e+00f,-1.46517615e+00f,-2.00982912e-02f,-4.21787978e-01f,-1.71806547e+00f,
-8.85235026e-01f,-2.32554670e-01f,-1.80907806e+00f,-1.71150986e+00f,}; 
k2c_tensor test6_input_1_2_input = {&test6_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test6_array[4] = {
-3.83709893e-02f,+1.99623063e-01f,-1.50353044e-01f,+2.81945676e-01f,}; 
k2c_tensor keras_dense_3_2_test6 = {&keras_dense_3_2_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test6_array[4] = {0}; 
k2c_tensor c_dense_3_2_test6 = {&c_dense_3_2_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_2_input_array[14] = {
+1.97518506e+00f,+1.60162748e+00f,+4.69529729e-01f,-5.45359405e-01f,+1.88102312e-02f,
+4.17985493e-01f,-5.78922614e-01f,-1.58041764e+00f,-1.95898869e+00f,+1.82975690e+00f,
+9.16312439e-01f,+6.39146740e-01f,-5.72834606e-01f,+1.68602884e+00f,}; 
k2c_tensor test7_input_1_2_input = {&test7_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test7_array[4] = {
-4.13559169e-01f,-1.39165059e-01f,-2.92788237e-01f,-3.15261513e-01f,}; 
k2c_tensor keras_dense_3_2_test7 = {&keras_dense_3_2_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test7_array[4] = {0}; 
k2c_tensor c_dense_3_2_test7 = {&c_dense_3_2_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_2_input_array[14] = {
-3.82575050e-01f,+2.11298739e-01f,-7.08369972e-01f,+5.67293457e-01f,+1.97507145e+00f,
-8.08031315e-01f,-8.58308597e-01f,+5.96735699e-01f,-1.73686271e+00f,+1.25478989e-01f,
+1.39457524e+00f,-7.40027330e-01f,+6.02868602e-01f,-7.13821185e-02f,}; 
k2c_tensor test8_input_1_2_input = {&test8_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test8_array[4] = {
-2.13838741e-01f,-1.05632648e-01f,+7.19743446e-02f,+6.35628626e-02f,}; 
k2c_tensor keras_dense_3_2_test8 = {&keras_dense_3_2_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test8_array[4] = {0}; 
k2c_tensor c_dense_3_2_test8 = {&c_dense_3_2_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_2_input_array[14] = {
+6.44943447e-02f,+9.63083481e-02f,-3.26090470e-01f,-1.25591953e+00f,-5.42820610e-01f,
+1.38819200e+00f,+7.53478442e-01f,-5.28692294e-01f,-1.32437863e+00f,-8.17133859e-01f,
-1.73854210e+00f,-7.50527814e-01f,-1.54218853e+00f,-1.97756430e+00f,}; 
k2c_tensor test9_input_1_2_input = {&test9_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test9_array[4] = {
+1.27605170e-01f,-2.03654513e-01f,-1.35179445e-01f,+1.07830331e-01f,}; 
k2c_tensor keras_dense_3_2_test9 = {&keras_dense_3_2_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test9_array[4] = {0}; 
k2c_tensor c_dense_3_2_test9 = {&c_dense_3_2_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_2_input_array[14] = {
-2.60921915e-01f,+8.47046155e-01f,+8.70774798e-01f,-1.80705270e+00f,+4.15362217e-01f,
-1.71754133e+00f,-1.49799885e+00f,+8.60653253e-01f,-1.21936584e+00f,-7.64804645e-02f,
-1.03037007e+00f,+4.54320322e-01f,+1.55761433e+00f,+1.12234788e+00f,}; 
k2c_tensor test10_input_1_2_input = {&test10_input_1_2_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_2_test10_array[4] = {
-3.30333501e-01f,-5.37292287e-02f,+1.53719798e-01f,+2.54092306e-01f,}; 
k2c_tensor keras_dense_3_2_test10 = {&keras_dense_3_2_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_2_test10_array[4] = {0}; 
k2c_tensor c_dense_3_2_test10 = {&c_dense_3_2_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_xmode(&test1_input_1_2_input,&c_dense_3_2_test1); 
torbeam_EC4_xmode(&test2_input_1_2_input,&c_dense_3_2_test2); 
torbeam_EC4_xmode(&test3_input_1_2_input,&c_dense_3_2_test3); 
torbeam_EC4_xmode(&test4_input_1_2_input,&c_dense_3_2_test4); 
torbeam_EC4_xmode(&test5_input_1_2_input,&c_dense_3_2_test5); 
torbeam_EC4_xmode(&test6_input_1_2_input,&c_dense_3_2_test6); 
torbeam_EC4_xmode(&test7_input_1_2_input,&c_dense_3_2_test7); 
torbeam_EC4_xmode(&test8_input_1_2_input,&c_dense_3_2_test8); 
torbeam_EC4_xmode(&test9_input_1_2_input,&c_dense_3_2_test9); 
torbeam_EC4_xmode(&test10_input_1_2_input,&c_dense_3_2_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_2_test1,&c_dense_3_2_test1); 
errors[1] = maxabs(&keras_dense_3_2_test2,&c_dense_3_2_test2); 
errors[2] = maxabs(&keras_dense_3_2_test3,&c_dense_3_2_test3); 
errors[3] = maxabs(&keras_dense_3_2_test4,&c_dense_3_2_test4); 
errors[4] = maxabs(&keras_dense_3_2_test5,&c_dense_3_2_test5); 
errors[5] = maxabs(&keras_dense_3_2_test6,&c_dense_3_2_test6); 
errors[6] = maxabs(&keras_dense_3_2_test7,&c_dense_3_2_test7); 
errors[7] = maxabs(&keras_dense_3_2_test8,&c_dense_3_2_test8); 
errors[8] = maxabs(&keras_dense_3_2_test9,&c_dense_3_2_test9); 
errors[9] = maxabs(&keras_dense_3_2_test10,&c_dense_3_2_test10); 
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

