#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_8_input_array[14] = {
-1.98400088e+00f,-1.93265056e+00f,+8.76942041e-01f,-1.21727525e+00f,-1.80726456e+00f,
+1.42109922e+00f,+7.58944994e-01f,+9.63733678e-02f,+1.88825866e+00f,+1.61331608e+00f,
-4.07581720e-01f,+9.60328857e-01f,-1.28858395e+00f,+1.45074650e+00f,}; 
k2c_tensor test1_input_1_8_input = {&test1_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test1_array[4] = {
+1.48817003e-01f,-2.99267948e-01f,+5.52752554e-01f,-4.29348387e-02f,}; 
k2c_tensor keras_dense_3_8_test1 = {&keras_dense_3_8_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test1_array[4] = {0}; 
k2c_tensor c_dense_3_8_test1 = {&c_dense_3_8_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_8_input_array[14] = {
-7.68776312e-01f,-1.07069839e+00f,+1.82752609e+00f,-2.50773707e-01f,+2.98662472e-01f,
-1.10135584e+00f,+7.32570512e-01f,+1.31870063e+00f,+6.37439460e-01f,-1.38915140e+00f,
-8.22370408e-01f,+1.01744338e+00f,-1.36833239e+00f,-3.29940635e-01f,}; 
k2c_tensor test2_input_1_8_input = {&test2_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test2_array[4] = {
+2.53360212e-01f,-2.31961444e-01f,+4.87283953e-02f,-8.09938461e-02f,}; 
k2c_tensor keras_dense_3_8_test2 = {&keras_dense_3_8_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test2_array[4] = {0}; 
k2c_tensor c_dense_3_8_test2 = {&c_dense_3_8_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_8_input_array[14] = {
-1.84668619e+00f,-1.19146196e+00f,+1.54993037e+00f,+7.07606212e-01f,+1.65675715e+00f,
-9.16091347e-01f,-1.80699690e+00f,+2.46431596e-01f,-2.00572473e-01f,+1.46127900e+00f,
-6.84160915e-01f,-3.27041279e-01f,+1.95783090e+00f,+1.94153630e+00f,}; 
k2c_tensor test3_input_1_8_input = {&test3_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test3_array[4] = {
+5.81147850e-01f,-7.03544736e-01f,-2.36005306e-01f,-5.44351816e-01f,}; 
k2c_tensor keras_dense_3_8_test3 = {&keras_dense_3_8_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test3_array[4] = {0}; 
k2c_tensor c_dense_3_8_test3 = {&c_dense_3_8_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_8_input_array[14] = {
-8.21065245e-01f,-1.04737585e+00f,+1.80661717e+00f,-7.36886967e-01f,-7.65820478e-01f,
+1.49009362e+00f,+8.72675310e-01f,+1.58566811e+00f,-1.83023973e+00f,+1.21129529e+00f,
-1.73159309e+00f,-8.44284211e-01f,-8.78230469e-01f,-1.40593961e+00f,}; 
k2c_tensor test4_input_1_8_input = {&test4_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test4_array[4] = {
+4.00714189e-01f,-2.99677670e-01f,+1.26547813e-01f,-3.27056386e-02f,}; 
k2c_tensor keras_dense_3_8_test4 = {&keras_dense_3_8_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test4_array[4] = {0}; 
k2c_tensor c_dense_3_8_test4 = {&c_dense_3_8_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_8_input_array[14] = {
+1.03983071e+00f,-6.16531517e-01f,-7.53290821e-01f,-1.00396064e+00f,-1.32976064e+00f,
-1.67970551e+00f,-1.81865606e+00f,-6.61778962e-01f,-7.87604716e-01f,+1.58770745e+00f,
+1.22564779e+00f,-9.94101350e-01f,-6.35156342e-01f,-2.77511461e-01f,}; 
k2c_tensor test5_input_1_8_input = {&test5_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test5_array[4] = {
+1.94617182e-01f,-6.78268671e-02f,+2.50624657e-01f,-3.45336050e-01f,}; 
k2c_tensor keras_dense_3_8_test5 = {&keras_dense_3_8_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test5_array[4] = {0}; 
k2c_tensor c_dense_3_8_test5 = {&c_dense_3_8_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_8_input_array[14] = {
-5.72686216e-01f,-1.70692167e-01f,-1.40175604e+00f,-4.72921100e-01f,-1.89264829e+00f,
+3.89436466e-01f,-9.66275305e-02f,-1.69235608e-01f,+4.12731217e-01f,+1.85051983e+00f,
-7.55978003e-01f,-1.99651291e-01f,+2.12956388e-01f,+1.86542118e+00f,}; 
k2c_tensor test6_input_1_8_input = {&test6_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test6_array[4] = {
+4.86287922e-02f,-1.67811081e-01f,+3.41006786e-01f,-9.63560417e-02f,}; 
k2c_tensor keras_dense_3_8_test6 = {&keras_dense_3_8_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test6_array[4] = {0}; 
k2c_tensor c_dense_3_8_test6 = {&c_dense_3_8_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_8_input_array[14] = {
-1.60206316e+00f,-1.82153248e+00f,-1.26331463e-01f,+4.02476428e-02f,+9.47313253e-01f,
+7.71862217e-01f,-9.63937868e-01f,-1.07239458e+00f,+1.91516201e+00f,+9.63450511e-01f,
+1.56544881e-01f,+1.55606003e+00f,-1.46191426e+00f,+2.62125920e-01f,}; 
k2c_tensor test7_input_1_8_input = {&test7_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test7_array[4] = {
+3.63299429e-01f,-2.25312665e-01f,+1.04185939e-01f,+6.61707819e-02f,}; 
k2c_tensor keras_dense_3_8_test7 = {&keras_dense_3_8_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test7_array[4] = {0}; 
k2c_tensor c_dense_3_8_test7 = {&c_dense_3_8_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_8_input_array[14] = {
+1.77788663e+00f,-6.37455738e-01f,+6.60270724e-01f,-1.65540432e+00f,-8.84760521e-01f,
-9.82075078e-01f,+1.23662529e+00f,-9.79545685e-02f,+1.80662152e+00f,-1.47931581e-01f,
+3.54913509e-01f,+1.98855053e+00f,-1.76507999e+00f,-1.42362034e+00f,}; 
k2c_tensor test8_input_1_8_input = {&test8_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test8_array[4] = {
+8.36379528e-02f,-3.26612815e-02f,+1.90345734e-01f,-1.69883728e-01f,}; 
k2c_tensor keras_dense_3_8_test8 = {&keras_dense_3_8_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test8_array[4] = {0}; 
k2c_tensor c_dense_3_8_test8 = {&c_dense_3_8_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_8_input_array[14] = {
+1.56610902e+00f,-1.57555288e+00f,+9.47183836e-01f,+1.07939183e+00f,+1.71944386e+00f,
-1.88792695e+00f,-1.47683577e-01f,+1.46432285e+00f,+1.32872054e+00f,-1.15969017e+00f,
+7.32663501e-01f,-1.17779814e-01f,-4.88907273e-01f,+2.97795949e-01f,}; 
k2c_tensor test9_input_1_8_input = {&test9_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test9_array[4] = {
+3.45744818e-01f,-1.10240437e-01f,-4.54540342e-01f,-3.53086740e-01f,}; 
k2c_tensor keras_dense_3_8_test9 = {&keras_dense_3_8_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test9_array[4] = {0}; 
k2c_tensor c_dense_3_8_test9 = {&c_dense_3_8_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_8_input_array[14] = {
-1.52758982e+00f,-3.09609056e-01f,-3.16468448e-01f,-1.32466698e+00f,+1.97227347e+00f,
-9.41207630e-01f,-3.79783509e-01f,-1.75494509e+00f,-1.22392987e+00f,+4.12234864e-02f,
-6.27219135e-02f,-1.16499075e+00f,+1.93692128e+00f,+6.64621743e-01f,}; 
k2c_tensor test10_input_1_8_input = {&test10_input_1_8_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_8_test10_array[4] = {
+4.01953515e-03f,-5.42243719e-01f,-1.90818042e-01f,-8.63589644e-01f,}; 
k2c_tensor keras_dense_3_8_test10 = {&keras_dense_3_8_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_8_test10_array[4] = {0}; 
k2c_tensor c_dense_3_8_test10 = {&c_dense_3_8_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_xmode(&test1_input_1_8_input,&c_dense_3_8_test1); 
torbeam_EC4_xmode(&test2_input_1_8_input,&c_dense_3_8_test2); 
torbeam_EC4_xmode(&test3_input_1_8_input,&c_dense_3_8_test3); 
torbeam_EC4_xmode(&test4_input_1_8_input,&c_dense_3_8_test4); 
torbeam_EC4_xmode(&test5_input_1_8_input,&c_dense_3_8_test5); 
torbeam_EC4_xmode(&test6_input_1_8_input,&c_dense_3_8_test6); 
torbeam_EC4_xmode(&test7_input_1_8_input,&c_dense_3_8_test7); 
torbeam_EC4_xmode(&test8_input_1_8_input,&c_dense_3_8_test8); 
torbeam_EC4_xmode(&test9_input_1_8_input,&c_dense_3_8_test9); 
torbeam_EC4_xmode(&test10_input_1_8_input,&c_dense_3_8_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_8_test1,&c_dense_3_8_test1); 
errors[1] = maxabs(&keras_dense_3_8_test2,&c_dense_3_8_test2); 
errors[2] = maxabs(&keras_dense_3_8_test3,&c_dense_3_8_test3); 
errors[3] = maxabs(&keras_dense_3_8_test4,&c_dense_3_8_test4); 
errors[4] = maxabs(&keras_dense_3_8_test5,&c_dense_3_8_test5); 
errors[5] = maxabs(&keras_dense_3_8_test6,&c_dense_3_8_test6); 
errors[6] = maxabs(&keras_dense_3_8_test7,&c_dense_3_8_test7); 
errors[7] = maxabs(&keras_dense_3_8_test8,&c_dense_3_8_test8); 
errors[8] = maxabs(&keras_dense_3_8_test9,&c_dense_3_8_test9); 
errors[9] = maxabs(&keras_dense_3_8_test10,&c_dense_3_8_test10); 
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

