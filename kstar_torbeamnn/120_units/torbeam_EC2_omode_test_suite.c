#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_1_input_array[14] = {
-4.06410361e-01f,+1.76159394e+00f,+1.24303823e-01f,+6.80149999e-01f,+1.46602433e+00f,
+9.82787332e-01f,+1.11766132e+00f,+1.28250860e+00f,+1.75206413e+00f,-1.34801809e+00f,
-9.02242533e-01f,-1.31196103e+00f,+1.32212431e+00f,-2.44873265e-01f,}; 
k2c_tensor test1_input_1_1_input = {&test1_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test1_array[4] = {
-1.74608141e-01f,-1.97934985e-01f,-3.55029888e-02f,+4.43929821e-01f,}; 
k2c_tensor keras_dense_3_1_test1 = {&keras_dense_3_1_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test1_array[4] = {0}; 
k2c_tensor c_dense_3_1_test1 = {&c_dense_3_1_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_1_input_array[14] = {
+1.57808787e+00f,-1.92448625e+00f,-1.69721924e+00f,+1.68962427e-02f,-1.45075831e+00f,
-1.47296344e+00f,+1.58684427e+00f,-1.80836705e+00f,+8.86603518e-01f,-1.40255000e-01f,
+1.66622718e+00f,-1.99266774e+00f,-1.28866921e+00f,-1.37957648e+00f,}; 
k2c_tensor test2_input_1_1_input = {&test2_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test2_array[4] = {
+3.19405854e-01f,-3.02463531e-01f,+4.49049562e-01f,+2.03813583e-01f,}; 
k2c_tensor keras_dense_3_1_test2 = {&keras_dense_3_1_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test2_array[4] = {0}; 
k2c_tensor c_dense_3_1_test2 = {&c_dense_3_1_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_1_input_array[14] = {
+8.46781900e-01f,-1.31585332e-01f,-1.05695536e+00f,+3.81446241e-01f,+1.04813628e+00f,
-1.77826035e+00f,+3.34751182e-01f,+4.20324354e-01f,+8.16961878e-01f,+1.38555162e+00f,
+6.01335812e-01f,+4.82000260e-01f,-4.45655935e-01f,-3.39112293e-01f,}; 
k2c_tensor test3_input_1_1_input = {&test3_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test3_array[4] = {
+2.09115490e-01f,-3.93554211e-01f,+1.21247612e-01f,+2.35657230e-01f,}; 
k2c_tensor keras_dense_3_1_test3 = {&keras_dense_3_1_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test3_array[4] = {0}; 
k2c_tensor c_dense_3_1_test3 = {&c_dense_3_1_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_1_input_array[14] = {
+1.66477433e+00f,-1.38460120e+00f,+9.04521705e-01f,+1.92219540e+00f,-2.20612239e-01f,
-1.28203775e+00f,-6.79756001e-01f,+1.49696295e+00f,+2.67451543e-01f,+9.62851097e-01f,
-1.90986007e+00f,+1.50104094e+00f,-1.61349233e+00f,+3.19677029e-01f,}; 
k2c_tensor test4_input_1_1_input = {&test4_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test4_array[4] = {
+3.19339663e-01f,-2.69958489e-02f,+3.72867018e-01f,+2.04263002e-01f,}; 
k2c_tensor keras_dense_3_1_test4 = {&keras_dense_3_1_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test4_array[4] = {0}; 
k2c_tensor c_dense_3_1_test4 = {&c_dense_3_1_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_1_input_array[14] = {
-2.96559420e-01f,-1.73281672e+00f,+1.03419240e+00f,-1.03889008e+00f,-1.46685515e+00f,
-3.54106201e-01f,-4.19028662e-01f,+2.06504331e-01f,+1.69150616e+00f,+1.49320220e+00f,
-1.45258499e+00f,+2.97868596e-01f,+8.49432210e-01f,+1.48368094e+00f,}; 
k2c_tensor test5_input_1_1_input = {&test5_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test5_array[4] = {
+8.62016156e-02f,-2.46911228e-01f,-5.39884623e-03f,+4.23490852e-02f,}; 
k2c_tensor keras_dense_3_1_test5 = {&keras_dense_3_1_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test5_array[4] = {0}; 
k2c_tensor c_dense_3_1_test5 = {&c_dense_3_1_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_1_input_array[14] = {
-2.47066676e-01f,+3.85095143e-01f,-9.41517518e-01f,-7.69697061e-01f,+1.52409642e-01f,
-2.08989161e-01f,-6.68083396e-02f,-7.77830708e-01f,-1.57086749e+00f,-5.66874781e-01f,
-4.77508829e-01f,+6.03483920e-01f,-1.10336708e+00f,+5.12428966e-01f,}; 
k2c_tensor test6_input_1_1_input = {&test6_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test6_array[4] = {
+2.32095327e-02f,-3.89241278e-02f,+3.92111018e-02f,+3.64095449e-01f,}; 
k2c_tensor keras_dense_3_1_test6 = {&keras_dense_3_1_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test6_array[4] = {0}; 
k2c_tensor c_dense_3_1_test6 = {&c_dense_3_1_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_1_input_array[14] = {
+1.51082822e-01f,-8.29409469e-01f,-7.50391586e-01f,-6.54803885e-01f,-1.91564676e+00f,
-1.13363180e+00f,+1.93040292e+00f,-5.37630161e-01f,-1.78980913e+00f,+2.96051074e-01f,
-1.64519932e-01f,-1.15461846e+00f,+4.28218393e-01f,+6.36261442e-01f,}; 
k2c_tensor test7_input_1_1_input = {&test7_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test7_array[4] = {
+2.96954066e-02f,-7.52724409e-02f,+1.39485836e-01f,+1.94490150e-01f,}; 
k2c_tensor keras_dense_3_1_test7 = {&keras_dense_3_1_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test7_array[4] = {0}; 
k2c_tensor c_dense_3_1_test7 = {&c_dense_3_1_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_1_input_array[14] = {
-1.63381704e+00f,+6.08926699e-01f,+1.74337919e+00f,+4.74727773e-01f,+9.87757287e-01f,
-8.49163960e-01f,-1.85516864e+00f,-4.24679103e-01f,+1.33330447e+00f,-3.71134799e-01f,
-6.11519207e-01f,-1.13278045e+00f,-1.51532486e+00f,+5.53679024e-01f,}; 
k2c_tensor test8_input_1_1_input = {&test8_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test8_array[4] = {
+3.24459970e-01f,+5.01109585e-02f,+4.99269646e-03f,+7.29029104e-02f,}; 
k2c_tensor keras_dense_3_1_test8 = {&keras_dense_3_1_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test8_array[4] = {0}; 
k2c_tensor c_dense_3_1_test8 = {&c_dense_3_1_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_1_input_array[14] = {
+5.98176882e-02f,-8.97040343e-01f,-1.36858433e+00f,+7.70144767e-01f,+1.64455363e+00f,
-1.84303513e+00f,+1.02574314e+00f,+7.99953549e-01f,+3.57278735e-01f,+1.53298545e+00f,
-1.03903664e+00f,+8.55477844e-01f,-7.62932822e-01f,-5.74650194e-01f,}; 
k2c_tensor test9_input_1_1_input = {&test9_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test9_array[4] = {
+1.79738358e-01f,-1.50844201e-01f,+1.97674811e-01f,+1.53996870e-01f,}; 
k2c_tensor keras_dense_3_1_test9 = {&keras_dense_3_1_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test9_array[4] = {0}; 
k2c_tensor c_dense_3_1_test9 = {&c_dense_3_1_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_1_input_array[14] = {
+1.87317858e+00f,+8.90662090e-01f,-7.40282461e-02f,-1.57781294e+00f,+8.76016717e-01f,
-1.26113017e+00f,-1.45854332e-01f,-1.59239078e+00f,+1.55139472e+00f,-1.71789233e+00f,
+9.72924486e-01f,-1.77005343e+00f,-1.01283588e+00f,+2.01061384e-01f,}; 
k2c_tensor test10_input_1_1_input = {&test10_input_1_1_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_1_test10_array[4] = {
+1.08329445e-01f,+2.12740049e-01f,+2.22199216e-01f,+3.72228563e-01f,}; 
k2c_tensor keras_dense_3_1_test10 = {&keras_dense_3_1_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_1_test10_array[4] = {0}; 
k2c_tensor c_dense_3_1_test10 = {&c_dense_3_1_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_omode(&test1_input_1_1_input,&c_dense_3_1_test1); 
torbeam_EC2_omode(&test2_input_1_1_input,&c_dense_3_1_test2); 
torbeam_EC2_omode(&test3_input_1_1_input,&c_dense_3_1_test3); 
torbeam_EC2_omode(&test4_input_1_1_input,&c_dense_3_1_test4); 
torbeam_EC2_omode(&test5_input_1_1_input,&c_dense_3_1_test5); 
torbeam_EC2_omode(&test6_input_1_1_input,&c_dense_3_1_test6); 
torbeam_EC2_omode(&test7_input_1_1_input,&c_dense_3_1_test7); 
torbeam_EC2_omode(&test8_input_1_1_input,&c_dense_3_1_test8); 
torbeam_EC2_omode(&test9_input_1_1_input,&c_dense_3_1_test9); 
torbeam_EC2_omode(&test10_input_1_1_input,&c_dense_3_1_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_1_test1,&c_dense_3_1_test1); 
errors[1] = maxabs(&keras_dense_3_1_test2,&c_dense_3_1_test2); 
errors[2] = maxabs(&keras_dense_3_1_test3,&c_dense_3_1_test3); 
errors[3] = maxabs(&keras_dense_3_1_test4,&c_dense_3_1_test4); 
errors[4] = maxabs(&keras_dense_3_1_test5,&c_dense_3_1_test5); 
errors[5] = maxabs(&keras_dense_3_1_test6,&c_dense_3_1_test6); 
errors[6] = maxabs(&keras_dense_3_1_test7,&c_dense_3_1_test7); 
errors[7] = maxabs(&keras_dense_3_1_test8,&c_dense_3_1_test8); 
errors[8] = maxabs(&keras_dense_3_1_test9,&c_dense_3_1_test9); 
errors[9] = maxabs(&keras_dense_3_1_test10,&c_dense_3_1_test10); 
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

