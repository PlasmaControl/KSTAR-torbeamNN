#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_5_input_array[14] = {
-4.89503272e-01f,+3.37984228e-02f,-6.05070438e-01f,+1.93149419e+00f,+1.93880478e+00f,
+1.68357561e+00f,+6.46185689e-01f,+4.42496466e-02f,+2.52601061e-01f,-6.34320409e-01f,
-1.86548268e+00f,-1.68643169e+00f,-9.49044646e-01f,+1.64602654e+00f,}; 
k2c_tensor test1_input_1_5_input = {&test1_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test1_array[4] = {
+7.32766790e-03f,+7.32297719e-01f,-6.41074061e-01f,-5.72734252e-02f,}; 
k2c_tensor keras_dense_3_5_test1 = {&keras_dense_3_5_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test1_array[4] = {0}; 
k2c_tensor c_dense_3_5_test1 = {&c_dense_3_5_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_5_input_array[14] = {
-3.81528271e-02f,+6.74746795e-01f,-8.36781508e-01f,+4.57890382e-01f,+1.80246620e+00f,
-1.99094536e+00f,+1.65567961e+00f,+1.50226892e+00f,-1.66465994e+00f,-5.48123551e-01f,
+1.20622730e+00f,-8.49921463e-01f,+5.49633752e-01f,+2.36168151e-01f,}; 
k2c_tensor test2_input_1_5_input = {&test2_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test2_array[4] = {
-4.69848782e-01f,+6.99043214e-01f,-5.36417365e-01f,-3.52848172e-01f,}; 
k2c_tensor keras_dense_3_5_test2 = {&keras_dense_3_5_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test2_array[4] = {0}; 
k2c_tensor c_dense_3_5_test2 = {&c_dense_3_5_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_5_input_array[14] = {
+2.86359662e-01f,-3.26468717e-01f,-1.98109843e+00f,+1.82694083e+00f,+8.91339554e-01f,
-1.59342443e+00f,-1.97777540e-01f,+5.25580386e-01f,-1.32571243e+00f,+9.19623125e-01f,
+3.50750355e-01f,+1.56223017e+00f,+1.65790366e+00f,-7.46593184e-01f,}; 
k2c_tensor test3_input_1_5_input = {&test3_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test3_array[4] = {
-2.26637051e-01f,+5.96777856e-01f,-4.94206101e-01f,-2.41777226e-01f,}; 
k2c_tensor keras_dense_3_5_test3 = {&keras_dense_3_5_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test3_array[4] = {0}; 
k2c_tensor c_dense_3_5_test3 = {&c_dense_3_5_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_5_input_array[14] = {
+6.22382586e-01f,+6.45247188e-01f,-1.37875832e+00f,+5.18317406e-01f,+1.04199834e+00f,
+8.68898748e-01f,-1.42328580e+00f,-6.27048800e-01f,-9.35709396e-01f,+7.76665577e-01f,
+9.94731129e-02f,-5.06376364e-04f,-8.68717181e-01f,-1.13676326e+00f,}; 
k2c_tensor test4_input_1_5_input = {&test4_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test4_array[4] = {
-1.03686623e-01f,+2.19247892e-01f,-4.85815704e-01f,-2.37304941e-01f,}; 
k2c_tensor keras_dense_3_5_test4 = {&keras_dense_3_5_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test4_array[4] = {0}; 
k2c_tensor c_dense_3_5_test4 = {&c_dense_3_5_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_5_input_array[14] = {
+9.49554498e-01f,+1.16096900e+00f,+8.13228501e-01f,+1.83630326e+00f,-8.33890160e-01f,
+8.18082181e-01f,+1.46590072e+00f,-1.28524346e+00f,+1.00413177e+00f,+1.80464512e+00f,
-1.18889839e+00f,+1.34696637e+00f,+7.35439432e-01f,-5.78876608e-01f,}; 
k2c_tensor test5_input_1_5_input = {&test5_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test5_array[4] = {
+9.60522071e-02f,+3.51329029e-01f,-1.63373068e-01f,-1.09451879e-02f,}; 
k2c_tensor keras_dense_3_5_test5 = {&keras_dense_3_5_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test5_array[4] = {0}; 
k2c_tensor c_dense_3_5_test5 = {&c_dense_3_5_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_5_input_array[14] = {
+1.62940563e+00f,+1.35404324e+00f,+1.75376897e+00f,-3.43998706e-01f,+2.72187033e-01f,
+1.46285486e+00f,+5.41196936e-01f,+9.73545990e-01f,+4.35104397e-02f,+1.50427148e+00f,
+2.84238193e-03f,+1.44365042e+00f,-7.73205002e-01f,+2.74996748e-01f,}; 
k2c_tensor test6_input_1_5_input = {&test6_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test6_array[4] = {
-4.62662242e-02f,+4.42957640e-01f,-4.99876171e-01f,+8.63840654e-02f,}; 
k2c_tensor keras_dense_3_5_test6 = {&keras_dense_3_5_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test6_array[4] = {0}; 
k2c_tensor c_dense_3_5_test6 = {&c_dense_3_5_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_5_input_array[14] = {
+3.71606238e-01f,+1.64218234e+00f,-1.82982087e+00f,-1.60824349e+00f,+1.00514650e+00f,
+6.63300949e-02f,-1.69824606e+00f,+1.20525834e+00f,-1.14777630e+00f,-7.02917910e-01f,
-1.57625320e+00f,+7.10926833e-01f,-1.48084350e+00f,+1.35439492e+00f,}; 
k2c_tensor test7_input_1_5_input = {&test7_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test7_array[4] = {
-8.97167102e-02f,+3.79223824e-01f,-1.03595853e+00f,+3.00216705e-01f,}; 
k2c_tensor keras_dense_3_5_test7 = {&keras_dense_3_5_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test7_array[4] = {0}; 
k2c_tensor c_dense_3_5_test7 = {&c_dense_3_5_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_5_input_array[14] = {
+6.41435021e-01f,-5.45477563e-01f,+6.77445944e-01f,+1.22879971e+00f,-1.27081334e+00f,
-7.13482291e-01f,-1.83345528e-01f,+1.33223628e+00f,+9.92051414e-01f,-1.15768744e+00f,
+5.79120102e-01f,-2.68064603e-01f,-1.20418316e+00f,-7.63371881e-02f,}; 
k2c_tensor test8_input_1_5_input = {&test8_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test8_array[4] = {
+4.02279198e-02f,+2.71782428e-01f,-2.81854600e-01f,+1.09535918e-01f,}; 
k2c_tensor keras_dense_3_5_test8 = {&keras_dense_3_5_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test8_array[4] = {0}; 
k2c_tensor c_dense_3_5_test8 = {&c_dense_3_5_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_5_input_array[14] = {
+9.70202222e-01f,-1.63835081e-01f,-8.32003294e-01f,+1.34574483e+00f,+1.46676989e+00f,
-1.52994182e+00f,+1.71670123e+00f,+1.83592284e+00f,+1.34126011e-01f,-2.70407488e-01f,
+1.28669538e+00f,-1.58863879e-01f,+1.74753640e+00f,+1.78622961e+00f,}; 
k2c_tensor test9_input_1_5_input = {&test9_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test9_array[4] = {
-3.17996889e-01f,+3.21797252e-01f,-2.67473459e-01f,+2.13931035e-02f,}; 
k2c_tensor keras_dense_3_5_test9 = {&keras_dense_3_5_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test9_array[4] = {0}; 
k2c_tensor c_dense_3_5_test9 = {&c_dense_3_5_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_5_input_array[14] = {
+1.12838418e-01f,-1.00992619e+00f,-1.05357382e-01f,-9.74876669e-01f,-1.34629199e+00f,
+9.05918520e-01f,-1.33962680e+00f,+1.02031026e+00f,+1.55699453e+00f,+1.39000988e+00f,
+2.12645384e-01f,-1.59797020e+00f,+1.10638130e+00f,+1.26912050e+00f,}; 
k2c_tensor test10_input_1_5_input = {&test10_input_1_5_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_5_test10_array[4] = {
+7.60217607e-02f,+2.39380315e-01f,-3.94559413e-01f,+2.03212321e-01f,}; 
k2c_tensor keras_dense_3_5_test10 = {&keras_dense_3_5_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_5_test10_array[4] = {0}; 
k2c_tensor c_dense_3_5_test10 = {&c_dense_3_5_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_omode(&test1_input_1_5_input,&c_dense_3_5_test1); 
torbeam_EC5_omode(&test2_input_1_5_input,&c_dense_3_5_test2); 
torbeam_EC5_omode(&test3_input_1_5_input,&c_dense_3_5_test3); 
torbeam_EC5_omode(&test4_input_1_5_input,&c_dense_3_5_test4); 
torbeam_EC5_omode(&test5_input_1_5_input,&c_dense_3_5_test5); 
torbeam_EC5_omode(&test6_input_1_5_input,&c_dense_3_5_test6); 
torbeam_EC5_omode(&test7_input_1_5_input,&c_dense_3_5_test7); 
torbeam_EC5_omode(&test8_input_1_5_input,&c_dense_3_5_test8); 
torbeam_EC5_omode(&test9_input_1_5_input,&c_dense_3_5_test9); 
torbeam_EC5_omode(&test10_input_1_5_input,&c_dense_3_5_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_5_test1,&c_dense_3_5_test1); 
errors[1] = maxabs(&keras_dense_3_5_test2,&c_dense_3_5_test2); 
errors[2] = maxabs(&keras_dense_3_5_test3,&c_dense_3_5_test3); 
errors[3] = maxabs(&keras_dense_3_5_test4,&c_dense_3_5_test4); 
errors[4] = maxabs(&keras_dense_3_5_test5,&c_dense_3_5_test5); 
errors[5] = maxabs(&keras_dense_3_5_test6,&c_dense_3_5_test6); 
errors[6] = maxabs(&keras_dense_3_5_test7,&c_dense_3_5_test7); 
errors[7] = maxabs(&keras_dense_3_5_test8,&c_dense_3_5_test8); 
errors[8] = maxabs(&keras_dense_3_5_test9,&c_dense_3_5_test9); 
errors[9] = maxabs(&keras_dense_3_5_test10,&c_dense_3_5_test10); 
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

