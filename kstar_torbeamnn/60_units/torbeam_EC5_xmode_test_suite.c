#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_10_input_array[14] = {
-2.83437435e-02f,+4.05807626e-01f,-7.73810474e-02f,+6.75713359e-01f,+7.73005638e-01f,
+1.74614648e+00f,+5.92548192e-01f,+1.62510811e+00f,-4.71718379e-01f,-1.65958159e-01f,
+4.50956911e-01f,-1.31346807e+00f,-1.32962317e+00f,-9.61999003e-01f,}; 
k2c_tensor test1_input_1_10_input = {&test1_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test1_array[4] = {
+2.84867525e-01f,-2.28984818e-01f,-6.94322512e-02f,+4.12582070e-01f,}; 
k2c_tensor keras_dense_3_10_test1 = {&keras_dense_3_10_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test1_array[4] = {0}; 
k2c_tensor c_dense_3_10_test1 = {&c_dense_3_10_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_10_input_array[14] = {
+1.77570665e+00f,+2.08699963e-01f,-9.06521582e-02f,-1.82049655e+00f,+1.43475200e+00f,
-1.03878588e+00f,+3.77548271e-01f,+1.04521150e+00f,-9.53637429e-01f,+1.74476267e+00f,
+1.55332282e+00f,-1.41593083e+00f,+1.48015649e+00f,+1.01902016e+00f,}; 
k2c_tensor test2_input_1_10_input = {&test2_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test2_array[4] = {
+4.51148272e-01f,-2.00660288e-01f,-2.74738610e-01f,+3.73261273e-01f,}; 
k2c_tensor keras_dense_3_10_test2 = {&keras_dense_3_10_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test2_array[4] = {0}; 
k2c_tensor c_dense_3_10_test2 = {&c_dense_3_10_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_10_input_array[14] = {
-1.10693758e+00f,-1.79148184e-01f,-1.51267952e-02f,+1.58371866e+00f,-7.26134083e-01f,
-4.79384653e-02f,+5.84526161e-01f,-6.94942396e-01f,-1.98918423e+00f,-1.74575141e+00f,
+1.76209891e+00f,-1.50217881e+00f,+6.98147641e-01f,+1.35795887e+00f,}; 
k2c_tensor test3_input_1_10_input = {&test3_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test3_array[4] = {
-5.43742813e-03f,-8.27077508e-01f,-2.08835393e-01f,+5.86942315e-01f,}; 
k2c_tensor keras_dense_3_10_test3 = {&keras_dense_3_10_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test3_array[4] = {0}; 
k2c_tensor c_dense_3_10_test3 = {&c_dense_3_10_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_10_input_array[14] = {
-4.05687520e-01f,-8.69501071e-01f,+1.96179382e+00f,-7.50504904e-02f,+1.79136785e+00f,
-1.67531436e+00f,+1.98050669e+00f,-5.06613971e-01f,+7.36928504e-01f,-1.60058586e+00f,
-1.05482641e+00f,+9.43322783e-01f,+8.31792914e-01f,-7.59948920e-01f,}; 
k2c_tensor test4_input_1_10_input = {&test4_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test4_array[4] = {
+1.55644920e-02f,-5.41092396e-01f,+1.37945116e-01f,+1.03323728e-01f,}; 
k2c_tensor keras_dense_3_10_test4 = {&keras_dense_3_10_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test4_array[4] = {0}; 
k2c_tensor c_dense_3_10_test4 = {&c_dense_3_10_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_10_input_array[14] = {
-1.61070367e+00f,-1.00421022e+00f,-1.23115806e-01f,+1.49840087e+00f,-2.44886785e-01f,
+4.27603763e-01f,+1.10703249e+00f,-4.08860173e-01f,+4.02359148e-01f,+1.56841181e+00f,
-1.89808545e-01f,+1.24749455e+00f,-3.43112523e-01f,+1.05344990e-01f,}; 
k2c_tensor test5_input_1_10_input = {&test5_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test5_array[4] = {
+5.12887359e-01f,-4.45317149e-01f,-3.42900723e-01f,+3.05538088e-01f,}; 
k2c_tensor keras_dense_3_10_test5 = {&keras_dense_3_10_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test5_array[4] = {0}; 
k2c_tensor c_dense_3_10_test5 = {&c_dense_3_10_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_10_input_array[14] = {
-6.49818147e-01f,+1.80109530e+00f,+1.06222958e+00f,-1.15416806e+00f,+1.37657629e+00f,
-1.12418783e+00f,-1.81185524e+00f,+2.52748227e-01f,+1.02936256e+00f,-6.77333651e-01f,
-1.75280496e+00f,-9.50949262e-01f,-3.54752469e-01f,+1.88400989e+00f,}; 
k2c_tensor test6_input_1_10_input = {&test6_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test6_array[4] = {
+1.58293203e-01f,-3.03272933e-01f,-1.45012572e-01f,-2.82299388e-02f,}; 
k2c_tensor keras_dense_3_10_test6 = {&keras_dense_3_10_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test6_array[4] = {0}; 
k2c_tensor c_dense_3_10_test6 = {&c_dense_3_10_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_10_input_array[14] = {
-3.20629174e-01f,-1.73249911e+00f,-4.00868656e-01f,-3.94218967e-01f,+9.88986734e-01f,
-1.22514181e+00f,+1.69213136e-01f,-8.39010659e-01f,+1.54124645e+00f,+1.27732999e+00f,
+3.71980742e-01f,-1.90908086e+00f,+3.94940797e-01f,-4.67712932e-01f,}; 
k2c_tensor test7_input_1_10_input = {&test7_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test7_array[4] = {
+3.29564214e-02f,-1.48235202e-01f,-9.27413031e-02f,+6.25837818e-02f,}; 
k2c_tensor keras_dense_3_10_test7 = {&keras_dense_3_10_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test7_array[4] = {0}; 
k2c_tensor c_dense_3_10_test7 = {&c_dense_3_10_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_10_input_array[14] = {
-1.98974756e+00f,-5.01704040e-01f,-1.93037962e+00f,-1.54888049e+00f,-1.10842048e+00f,
+9.96107753e-01f,+1.15985003e-01f,+1.88451386e+00f,+1.38726010e+00f,+7.46397830e-01f,
-7.92151681e-01f,-1.49189692e+00f,+4.02604125e-01f,-4.08997452e-01f,}; 
k2c_tensor test8_input_1_10_input = {&test8_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test8_array[4] = {
+1.61087364e-01f,-1.26723185e-01f,-1.51501477e-01f,+3.98439199e-01f,}; 
k2c_tensor keras_dense_3_10_test8 = {&keras_dense_3_10_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test8_array[4] = {0}; 
k2c_tensor c_dense_3_10_test8 = {&c_dense_3_10_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_10_input_array[14] = {
+1.56014990e+00f,+5.79845428e-02f,+6.04457735e-01f,+1.95981940e+00f,+9.40486275e-02f,
-5.31022765e-01f,-4.39672837e-01f,-1.72497495e+00f,-1.12565945e+00f,-3.23184747e-01f,
+4.88391134e-01f,-7.56410332e-01f,-9.31254976e-03f,-1.99144261e+00f,}; 
k2c_tensor test9_input_1_10_input = {&test9_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test9_array[4] = {
+2.54352778e-01f,-5.92067599e-01f,-1.13277979e-01f,+3.51582706e-01f,}; 
k2c_tensor keras_dense_3_10_test9 = {&keras_dense_3_10_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test9_array[4] = {0}; 
k2c_tensor c_dense_3_10_test9 = {&c_dense_3_10_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_10_input_array[14] = {
+8.67047024e-01f,-1.23405543e+00f,-1.66675306e+00f,+1.61265519e+00f,+1.83159858e+00f,
+1.28016730e+00f,-7.83849598e-01f,+1.08191046e+00f,+1.82549246e+00f,-7.03452228e-01f,
+9.86891232e-01f,+8.30638931e-01f,+1.23369770e+00f,-1.70491450e+00f,}; 
k2c_tensor test10_input_1_10_input = {&test10_input_1_10_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_10_test10_array[4] = {
+9.13545936e-02f,-2.94850826e-01f,+1.15444481e-01f,+2.78676391e-01f,}; 
k2c_tensor keras_dense_3_10_test10 = {&keras_dense_3_10_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_10_test10_array[4] = {0}; 
k2c_tensor c_dense_3_10_test10 = {&c_dense_3_10_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_xmode(&test1_input_1_10_input,&c_dense_3_10_test1); 
torbeam_EC5_xmode(&test2_input_1_10_input,&c_dense_3_10_test2); 
torbeam_EC5_xmode(&test3_input_1_10_input,&c_dense_3_10_test3); 
torbeam_EC5_xmode(&test4_input_1_10_input,&c_dense_3_10_test4); 
torbeam_EC5_xmode(&test5_input_1_10_input,&c_dense_3_10_test5); 
torbeam_EC5_xmode(&test6_input_1_10_input,&c_dense_3_10_test6); 
torbeam_EC5_xmode(&test7_input_1_10_input,&c_dense_3_10_test7); 
torbeam_EC5_xmode(&test8_input_1_10_input,&c_dense_3_10_test8); 
torbeam_EC5_xmode(&test9_input_1_10_input,&c_dense_3_10_test9); 
torbeam_EC5_xmode(&test10_input_1_10_input,&c_dense_3_10_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_10_test1,&c_dense_3_10_test1); 
errors[1] = maxabs(&keras_dense_3_10_test2,&c_dense_3_10_test2); 
errors[2] = maxabs(&keras_dense_3_10_test3,&c_dense_3_10_test3); 
errors[3] = maxabs(&keras_dense_3_10_test4,&c_dense_3_10_test4); 
errors[4] = maxabs(&keras_dense_3_10_test5,&c_dense_3_10_test5); 
errors[5] = maxabs(&keras_dense_3_10_test6,&c_dense_3_10_test6); 
errors[6] = maxabs(&keras_dense_3_10_test7,&c_dense_3_10_test7); 
errors[7] = maxabs(&keras_dense_3_10_test8,&c_dense_3_10_test8); 
errors[8] = maxabs(&keras_dense_3_10_test9,&c_dense_3_10_test9); 
errors[9] = maxabs(&keras_dense_3_10_test10,&c_dense_3_10_test10); 
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

