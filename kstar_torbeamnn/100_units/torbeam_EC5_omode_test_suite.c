#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_23_input_array[14] = {
-8.05311286e-01f,+1.34184058e+00f,-1.78766744e+00f,-1.90379071e+00f,-8.30666757e-01f,
-1.99471400e+00f,-1.52819648e-01f,-9.23819818e-01f,-4.71016764e-01f,-1.60538276e+00f,
+1.81654015e+00f,-1.17866395e+00f,-9.69699963e-01f,+1.32301350e+00f,}; 
k2c_tensor test1_input_1_23_input = {&test1_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test1_array[4] = {
-7.76734650e-02f,-1.11676909e-01f,+1.80909023e-01f,+3.79433572e-01f,}; 
k2c_tensor keras_dense_3_23_test1 = {&keras_dense_3_23_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test1_array[4] = {0}; 
k2c_tensor c_dense_3_23_test1 = {&c_dense_3_23_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_23_input_array[14] = {
+1.58978843e+00f,+1.63757979e+00f,-1.77859715e+00f,+6.39536677e-01f,-1.71619169e+00f,
-7.82255083e-01f,-3.94439853e-01f,+6.28394733e-01f,+5.60654713e-01f,+9.58270006e-01f,
+1.37209484e-01f,+1.42084262e+00f,-1.45494921e+00f,+7.83803517e-01f,}; 
k2c_tensor test2_input_1_23_input = {&test2_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test2_array[4] = {
+4.79621924e-02f,-1.17786996e-01f,+2.91288882e-01f,-7.41758570e-02f,}; 
k2c_tensor keras_dense_3_23_test2 = {&keras_dense_3_23_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test2_array[4] = {0}; 
k2c_tensor c_dense_3_23_test2 = {&c_dense_3_23_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_23_input_array[14] = {
+1.19755918e+00f,-6.08294532e-01f,-1.22585107e+00f,+5.47435998e-01f,-8.48685412e-01f,
+3.53909091e-01f,-1.02222701e+00f,-1.86084239e+00f,+3.87613572e-01f,-1.02670428e+00f,
+1.17090310e+00f,-1.20813971e+00f,-1.75054485e+00f,-1.33727825e+00f,}; 
k2c_tensor test3_input_1_23_input = {&test3_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test3_array[4] = {
-1.28905147e-01f,-2.90545553e-01f,+4.33072805e-01f,-1.02130063e-01f,}; 
k2c_tensor keras_dense_3_23_test3 = {&keras_dense_3_23_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test3_array[4] = {0}; 
k2c_tensor c_dense_3_23_test3 = {&c_dense_3_23_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_23_input_array[14] = {
-1.56744468e+00f,-1.85995587e+00f,-2.53044239e-01f,-8.89331809e-01f,-1.54824031e+00f,
+1.20595129e+00f,-1.88608640e+00f,+9.49278803e-01f,-1.80374506e+00f,-1.21387107e+00f,
-1.74083636e+00f,+1.48836442e-01f,-1.57240025e+00f,-1.29485468e+00f,}; 
k2c_tensor test4_input_1_23_input = {&test4_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test4_array[4] = {
-3.41435850e-01f,-2.31582388e-01f,+3.60942572e-01f,-6.63913861e-02f,}; 
k2c_tensor keras_dense_3_23_test4 = {&keras_dense_3_23_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test4_array[4] = {0}; 
k2c_tensor c_dense_3_23_test4 = {&c_dense_3_23_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_23_input_array[14] = {
-5.91050520e-01f,-5.26082101e-01f,+8.72947970e-02f,+1.24953536e+00f,-9.17803804e-01f,
+7.03765540e-01f,-1.91748609e+00f,+1.28144099e+00f,-1.17088683e+00f,+3.95698264e-01f,
+9.89475231e-01f,+5.32069553e-01f,+6.92137743e-01f,-7.10779295e-01f,}; 
k2c_tensor test5_input_1_23_input = {&test5_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test5_array[4] = {
-8.44844729e-02f,-2.62941420e-01f,+1.21976383e-01f,-8.57487991e-02f,}; 
k2c_tensor keras_dense_3_23_test5 = {&keras_dense_3_23_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test5_array[4] = {0}; 
k2c_tensor c_dense_3_23_test5 = {&c_dense_3_23_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_23_input_array[14] = {
-4.08979804e-01f,-3.26188885e-01f,+3.28332126e-01f,-4.39639164e-01f,-1.87503868e+00f,
-1.36898183e+00f,+1.38397161e+00f,+1.15778560e-01f,+6.29131839e-02f,-2.64636149e-01f,
+3.73140355e-01f,+1.96263131e+00f,-5.44721732e-01f,+1.99557055e+00f,}; 
k2c_tensor test6_input_1_23_input = {&test6_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test6_array[4] = {
-1.20061919e-01f,-1.30283326e-01f,+8.39697868e-02f,+1.37123093e-01f,}; 
k2c_tensor keras_dense_3_23_test6 = {&keras_dense_3_23_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test6_array[4] = {0}; 
k2c_tensor c_dense_3_23_test6 = {&c_dense_3_23_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_23_input_array[14] = {
+1.61993122e+00f,-7.26604348e-01f,+1.74125752e+00f,-9.11258541e-01f,+1.18008474e+00f,
+1.75768574e+00f,+5.76151905e-01f,+1.52654757e+00f,-5.15948158e-01f,+2.30580136e-01f,
-8.13826689e-01f,-1.72006990e+00f,+1.43345801e+00f,+2.58086431e-01f,}; 
k2c_tensor test7_input_1_23_input = {&test7_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test7_array[4] = {
+2.27273718e-01f,-3.00580114e-01f,-7.69791529e-02f,+1.81051046e-01f,}; 
k2c_tensor keras_dense_3_23_test7 = {&keras_dense_3_23_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test7_array[4] = {0}; 
k2c_tensor c_dense_3_23_test7 = {&c_dense_3_23_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_23_input_array[14] = {
-1.93345990e-01f,-1.48518581e+00f,+1.01925651e+00f,+9.74647970e-01f,-1.00480798e+00f,
-2.20294243e-01f,+9.38685751e-01f,-8.86288050e-01f,+1.12573359e+00f,+7.39380510e-01f,
+1.67954825e+00f,-1.61147859e+00f,+1.23324664e+00f,-8.61918166e-01f,}; 
k2c_tensor test8_input_1_23_input = {&test8_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test8_array[4] = {
+2.03412995e-01f,-1.21604111e-02f,+1.45843998e-01f,+1.24403588e-01f,}; 
k2c_tensor keras_dense_3_23_test8 = {&keras_dense_3_23_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test8_array[4] = {0}; 
k2c_tensor c_dense_3_23_test8 = {&c_dense_3_23_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_23_input_array[14] = {
-1.52401417e+00f,-4.93504606e-01f,+5.92605310e-01f,+8.07509347e-01f,+1.56185007e+00f,
-6.97045513e-01f,+8.49189206e-01f,+1.83495387e+00f,+9.44117041e-01f,-1.60527167e-01f,
+1.24421766e+00f,-1.41414176e+00f,+1.84421757e+00f,-1.12545849e+00f,}; 
k2c_tensor test9_input_1_23_input = {&test9_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test9_array[4] = {
+3.86397578e-02f,-2.08480999e-01f,+6.09627403e-02f,+2.50641495e-01f,}; 
k2c_tensor keras_dense_3_23_test9 = {&keras_dense_3_23_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test9_array[4] = {0}; 
k2c_tensor c_dense_3_23_test9 = {&c_dense_3_23_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_23_input_array[14] = {
+5.50487727e-01f,+8.73856161e-01f,+6.10071681e-03f,-2.33620447e-01f,-8.24540303e-01f,
-6.09679322e-01f,+1.54252541e+00f,+1.53984207e+00f,+8.22729565e-02f,+1.45346628e+00f,
+8.35164265e-01f,+2.49339810e-01f,+3.95078175e-01f,+1.72404455e+00f,}; 
k2c_tensor test10_input_1_23_input = {&test10_input_1_23_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_23_test10_array[4] = {
+1.65310547e-01f,-1.91534236e-02f,-1.97997659e-01f,+2.41909981e-01f,}; 
k2c_tensor keras_dense_3_23_test10 = {&keras_dense_3_23_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_23_test10_array[4] = {0}; 
k2c_tensor c_dense_3_23_test10 = {&c_dense_3_23_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_omode(&test1_input_1_23_input,&c_dense_3_23_test1); 
torbeam_EC5_omode(&test2_input_1_23_input,&c_dense_3_23_test2); 
torbeam_EC5_omode(&test3_input_1_23_input,&c_dense_3_23_test3); 
torbeam_EC5_omode(&test4_input_1_23_input,&c_dense_3_23_test4); 
torbeam_EC5_omode(&test5_input_1_23_input,&c_dense_3_23_test5); 
torbeam_EC5_omode(&test6_input_1_23_input,&c_dense_3_23_test6); 
torbeam_EC5_omode(&test7_input_1_23_input,&c_dense_3_23_test7); 
torbeam_EC5_omode(&test8_input_1_23_input,&c_dense_3_23_test8); 
torbeam_EC5_omode(&test9_input_1_23_input,&c_dense_3_23_test9); 
torbeam_EC5_omode(&test10_input_1_23_input,&c_dense_3_23_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_23_test1,&c_dense_3_23_test1); 
errors[1] = maxabs(&keras_dense_3_23_test2,&c_dense_3_23_test2); 
errors[2] = maxabs(&keras_dense_3_23_test3,&c_dense_3_23_test3); 
errors[3] = maxabs(&keras_dense_3_23_test4,&c_dense_3_23_test4); 
errors[4] = maxabs(&keras_dense_3_23_test5,&c_dense_3_23_test5); 
errors[5] = maxabs(&keras_dense_3_23_test6,&c_dense_3_23_test6); 
errors[6] = maxabs(&keras_dense_3_23_test7,&c_dense_3_23_test7); 
errors[7] = maxabs(&keras_dense_3_23_test8,&c_dense_3_23_test8); 
errors[8] = maxabs(&keras_dense_3_23_test9,&c_dense_3_23_test9); 
errors[9] = maxabs(&keras_dense_3_23_test10,&c_dense_3_23_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC5_omode_terminate(); 
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

