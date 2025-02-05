#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_22_input_array[14] = {
-9.31533717e-01f,-1.08311355e+00f,+1.68122770e+00f,+1.82353894e+00f,-1.92402415e+00f,
+9.33133243e-01f,-2.75666115e-01f,+1.96019183e+00f,-2.54509478e-01f,-1.71198808e+00f,
+5.76794921e-01f,-8.82281021e-02f,-2.95462342e-01f,-7.83089912e-01f,}; 
k2c_tensor test1_input_1_22_input = {&test1_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test1_array[4] = {
+2.25060552e-01f,-4.31609973e-02f,+4.08683687e-01f,+4.40266967e-01f,}; 
k2c_tensor keras_dense_3_22_test1 = {&keras_dense_3_22_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test1_array[4] = {0}; 
k2c_tensor c_dense_3_22_test1 = {&c_dense_3_22_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_22_input_array[14] = {
+5.64390449e-01f,+2.50204906e-01f,-7.37800090e-01f,-6.86608367e-01f,-1.18108044e+00f,
-1.98676107e+00f,+9.19054242e-02f,+3.15185680e-02f,-3.24402897e-01f,-1.87102567e+00f,
+1.97212718e+00f,+7.30098613e-01f,-1.64778576e+00f,-8.17827135e-01f,}; 
k2c_tensor test2_input_1_22_input = {&test2_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test2_array[4] = {
+2.28299782e-01f,-1.18572414e-01f,+2.62212396e-01f,+1.99537009e-01f,}; 
k2c_tensor keras_dense_3_22_test2 = {&keras_dense_3_22_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test2_array[4] = {0}; 
k2c_tensor c_dense_3_22_test2 = {&c_dense_3_22_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_22_input_array[14] = {
-1.73323809e+00f,-1.40054972e+00f,-6.19011020e-01f,-1.88984036e+00f,+1.71111510e+00f,
-2.76963799e-01f,+4.51848059e-01f,-1.09306081e+00f,-1.70278808e+00f,-4.12128950e-01f,
+4.05882387e-01f,+4.50768821e-01f,+1.64822967e+00f,+6.05572858e-01f,}; 
k2c_tensor test3_input_1_22_input = {&test3_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test3_array[4] = {
+1.52705595e-01f,-8.59333426e-02f,+3.21759552e-01f,+5.66131845e-02f,}; 
k2c_tensor keras_dense_3_22_test3 = {&keras_dense_3_22_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test3_array[4] = {0}; 
k2c_tensor c_dense_3_22_test3 = {&c_dense_3_22_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_22_input_array[14] = {
+1.62671259e+00f,-1.04061099e+00f,-1.01138572e+00f,+1.84513100e+00f,+1.07415279e+00f,
+1.35610702e+00f,+1.24825317e+00f,-9.71471201e-01f,+1.22807892e+00f,-3.69129110e-01f,
-1.91431795e+00f,+7.59473742e-01f,+1.19993981e+00f,+7.68438387e-02f,}; 
k2c_tensor test4_input_1_22_input = {&test4_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test4_array[4] = {
+1.05925366e-01f,-4.22808200e-01f,+3.64474952e-01f,+4.29601729e-01f,}; 
k2c_tensor keras_dense_3_22_test4 = {&keras_dense_3_22_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test4_array[4] = {0}; 
k2c_tensor c_dense_3_22_test4 = {&c_dense_3_22_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_22_input_array[14] = {
-6.55968827e-01f,+1.54538439e+00f,-2.17567211e-01f,-3.24703105e-01f,-1.68988481e+00f,
-9.72463400e-01f,+8.57072596e-01f,-1.89160156e+00f,+1.95412705e+00f,-1.03121113e+00f,
-1.67716388e+00f,+4.23732779e-01f,-1.96348370e+00f,+7.62242831e-01f,}; 
k2c_tensor test5_input_1_22_input = {&test5_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test5_array[4] = {
+2.48011142e-01f,-4.59739864e-01f,+6.12043023e-01f,+1.38814315e-01f,}; 
k2c_tensor keras_dense_3_22_test5 = {&keras_dense_3_22_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test5_array[4] = {0}; 
k2c_tensor c_dense_3_22_test5 = {&c_dense_3_22_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_22_input_array[14] = {
+1.03859306e+00f,+1.48775875e+00f,+9.23723815e-01f,+1.35249807e+00f,-1.43817275e+00f,
+1.20813018e+00f,-2.34059519e-01f,-9.15152698e-03f,+7.05955281e-01f,-1.53858646e+00f,
+1.47346049e+00f,+6.90589950e-01f,-1.08685956e-01f,+1.98087821e+00f,}; 
k2c_tensor test6_input_1_22_input = {&test6_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test6_array[4] = {
+2.59948730e-01f,-1.82533264e-01f,+4.00645405e-01f,+3.19453567e-01f,}; 
k2c_tensor keras_dense_3_22_test6 = {&keras_dense_3_22_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test6_array[4] = {0}; 
k2c_tensor c_dense_3_22_test6 = {&c_dense_3_22_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_22_input_array[14] = {
-8.79829068e-01f,-7.79792627e-01f,-1.93615757e+00f,-7.08312135e-01f,+8.07240943e-01f,
-4.46811836e-01f,+1.19465927e+00f,+1.84585436e+00f,+1.26709293e+00f,+9.04719442e-01f,
-1.83317269e+00f,+1.40273352e+00f,-1.14046426e+00f,+1.21633647e+00f,}; 
k2c_tensor test7_input_1_22_input = {&test7_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test7_array[4] = {
-1.64921567e-01f,-4.07878637e-01f,+3.77001792e-01f,+2.42209569e-01f,}; 
k2c_tensor keras_dense_3_22_test7 = {&keras_dense_3_22_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test7_array[4] = {0}; 
k2c_tensor c_dense_3_22_test7 = {&c_dense_3_22_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_22_input_array[14] = {
+1.16971243e+00f,+1.58348335e+00f,-1.86662471e+00f,+1.38836629e+00f,-7.42413205e-01f,
+1.00486962e+00f,-1.67407497e+00f,-6.94724107e-01f,-5.47282665e-02f,-8.95437047e-01f,
+1.39337558e+00f,-1.62342786e+00f,+7.77996430e-02f,+1.64626381e+00f,}; 
k2c_tensor test8_input_1_22_input = {&test8_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test8_array[4] = {
+8.52734745e-02f,-3.38499367e-01f,+4.75870818e-01f,+5.42638719e-01f,}; 
k2c_tensor keras_dense_3_22_test8 = {&keras_dense_3_22_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test8_array[4] = {0}; 
k2c_tensor c_dense_3_22_test8 = {&c_dense_3_22_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_22_input_array[14] = {
+1.31050312e+00f,-5.49566817e-01f,-1.88776474e+00f,+1.82975204e+00f,+5.43512429e-01f,
-1.98855356e+00f,+3.13301237e-01f,-1.91750679e+00f,+1.49128186e+00f,+1.21973813e+00f,
+6.16446177e-01f,-1.22903563e+00f,-1.29727827e+00f,+1.26891229e+00f,}; 
k2c_tensor test9_input_1_22_input = {&test9_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test9_array[4] = {
+4.48941231e-01f,-6.50100768e-01f,+6.60206258e-01f,+5.85817099e-01f,}; 
k2c_tensor keras_dense_3_22_test9 = {&keras_dense_3_22_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test9_array[4] = {0}; 
k2c_tensor c_dense_3_22_test9 = {&c_dense_3_22_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_22_input_array[14] = {
-1.00815566e+00f,-1.31679095e+00f,+3.97256514e-01f,-8.66113642e-01f,+1.99948735e-01f,
-6.44793300e-01f,+7.56260073e-02f,-1.20488000e-01f,-1.94416986e+00f,-1.36923817e+00f,
-6.11972090e-01f,+1.75921181e+00f,-1.14140849e+00f,-3.99036199e-01f,}; 
k2c_tensor test10_input_1_22_input = {&test10_input_1_22_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_22_test10_array[4] = {
+8.20049718e-02f,-1.78950727e-01f,+3.80697459e-01f,+5.95375896e-02f,}; 
k2c_tensor keras_dense_3_22_test10 = {&keras_dense_3_22_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_22_test10_array[4] = {0}; 
k2c_tensor c_dense_3_22_test10 = {&c_dense_3_22_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_xmode(&test1_input_1_22_input,&c_dense_3_22_test1); 
torbeam_EC5_xmode(&test2_input_1_22_input,&c_dense_3_22_test2); 
torbeam_EC5_xmode(&test3_input_1_22_input,&c_dense_3_22_test3); 
torbeam_EC5_xmode(&test4_input_1_22_input,&c_dense_3_22_test4); 
torbeam_EC5_xmode(&test5_input_1_22_input,&c_dense_3_22_test5); 
torbeam_EC5_xmode(&test6_input_1_22_input,&c_dense_3_22_test6); 
torbeam_EC5_xmode(&test7_input_1_22_input,&c_dense_3_22_test7); 
torbeam_EC5_xmode(&test8_input_1_22_input,&c_dense_3_22_test8); 
torbeam_EC5_xmode(&test9_input_1_22_input,&c_dense_3_22_test9); 
torbeam_EC5_xmode(&test10_input_1_22_input,&c_dense_3_22_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_22_test1,&c_dense_3_22_test1); 
errors[1] = maxabs(&keras_dense_3_22_test2,&c_dense_3_22_test2); 
errors[2] = maxabs(&keras_dense_3_22_test3,&c_dense_3_22_test3); 
errors[3] = maxabs(&keras_dense_3_22_test4,&c_dense_3_22_test4); 
errors[4] = maxabs(&keras_dense_3_22_test5,&c_dense_3_22_test5); 
errors[5] = maxabs(&keras_dense_3_22_test6,&c_dense_3_22_test6); 
errors[6] = maxabs(&keras_dense_3_22_test7,&c_dense_3_22_test7); 
errors[7] = maxabs(&keras_dense_3_22_test8,&c_dense_3_22_test8); 
errors[8] = maxabs(&keras_dense_3_22_test9,&c_dense_3_22_test9); 
errors[9] = maxabs(&keras_dense_3_22_test10,&c_dense_3_22_test10); 
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

