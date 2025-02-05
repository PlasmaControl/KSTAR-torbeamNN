#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC4_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_20_input_array[14] = {
-1.71478024e+00f,-1.39976602e-01f,+4.70418246e-01f,-1.92243551e+00f,+1.99395344e+00f,
-1.71364908e+00f,-1.19957257e+00f,+1.42266151e+00f,-1.77128449e+00f,+4.34915712e-01f,
-1.96791903e+00f,-7.83184491e-01f,+1.24818702e+00f,-1.58304465e+00f,}; 
k2c_tensor test1_input_1_20_input = {&test1_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test1_array[4] = {
-1.32133350e-01f,+2.58948475e-01f,+7.28428066e-01f,+1.27506539e-01f,}; 
k2c_tensor keras_dense_3_20_test1 = {&keras_dense_3_20_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test1_array[4] = {0}; 
k2c_tensor c_dense_3_20_test1 = {&c_dense_3_20_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_20_input_array[14] = {
-1.15122440e+00f,-1.21387919e+00f,+3.37965452e-02f,+2.16000337e-01f,+1.13012114e+00f,
+9.04096629e-01f,+4.86838443e-01f,+2.24649585e-01f,+1.29011832e-01f,+1.45769427e+00f,
+7.27139862e-01f,-5.35023584e-01f,-7.53530484e-01f,-9.07397725e-01f,}; 
k2c_tensor test2_input_1_20_input = {&test2_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test2_array[4] = {
+6.75029960e-03f,+2.97039617e-02f,+6.02308333e-01f,+3.93602997e-01f,}; 
k2c_tensor keras_dense_3_20_test2 = {&keras_dense_3_20_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test2_array[4] = {0}; 
k2c_tensor c_dense_3_20_test2 = {&c_dense_3_20_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_20_input_array[14] = {
+1.20682758e+00f,+1.42039568e+00f,-3.38266336e-01f,-1.37895220e+00f,+1.37306219e+00f,
+1.83067269e+00f,+6.81828154e-01f,-4.35140543e-01f,-2.90980678e-01f,+7.79399434e-01f,
-2.44665190e-01f,-1.52839137e-01f,+1.30902532e-01f,-1.84263111e+00f,}; 
k2c_tensor test3_input_1_20_input = {&test3_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test3_array[4] = {
-3.81601304e-01f,+1.82686727e-02f,+3.18229556e-01f,+4.99255180e-01f,}; 
k2c_tensor keras_dense_3_20_test3 = {&keras_dense_3_20_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test3_array[4] = {0}; 
k2c_tensor c_dense_3_20_test3 = {&c_dense_3_20_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_20_input_array[14] = {
+1.83044342e-01f,-1.23671378e+00f,-4.99630742e-01f,-1.79563795e+00f,-1.44940695e+00f,
-8.24615610e-01f,+8.32570427e-02f,+6.84380124e-01f,+1.88590340e+00f,+3.88840850e-01f,
+2.55883863e-01f,-1.93801145e+00f,+1.19015001e+00f,+1.96577532e+00f,}; 
k2c_tensor test4_input_1_20_input = {&test4_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test4_array[4] = {
+2.59353705e-02f,+1.26199871e-01f,-1.85499787e-02f,+3.47580433e-01f,}; 
k2c_tensor keras_dense_3_20_test4 = {&keras_dense_3_20_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test4_array[4] = {0}; 
k2c_tensor c_dense_3_20_test4 = {&c_dense_3_20_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_20_input_array[14] = {
-4.11554622e-01f,-1.17096700e+00f,+4.14199673e-01f,+6.42949379e-01f,+1.81987156e+00f,
-1.99758307e+00f,-1.64320063e+00f,-1.51133874e+00f,-3.10417031e-01f,-8.14671736e-01f,
+9.68905444e-01f,-7.61577615e-01f,-6.20316630e-01f,+1.07658186e+00f,}; 
k2c_tensor test5_input_1_20_input = {&test5_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test5_array[4] = {
+7.55148903e-02f,+1.30159333e-01f,+3.28341872e-01f,+2.39915714e-01f,}; 
k2c_tensor keras_dense_3_20_test5 = {&keras_dense_3_20_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test5_array[4] = {0}; 
k2c_tensor c_dense_3_20_test5 = {&c_dense_3_20_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_20_input_array[14] = {
+7.77877799e-01f,-1.78089101e+00f,+1.31770297e+00f,+2.62990237e-02f,-1.54151379e-01f,
-2.00867939e-01f,+1.46902329e+00f,-5.35263487e-01f,+6.93125616e-01f,-1.04958612e+00f,
+5.47126943e-01f,-5.16750822e-01f,-1.32545547e+00f,-9.18690115e-01f,}; 
k2c_tensor test6_input_1_20_input = {&test6_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test6_array[4] = {
-3.30011174e-02f,+1.24896951e-01f,+2.45102212e-01f,+6.10861063e-01f,}; 
k2c_tensor keras_dense_3_20_test6 = {&keras_dense_3_20_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test6_array[4] = {0}; 
k2c_tensor c_dense_3_20_test6 = {&c_dense_3_20_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_20_input_array[14] = {
+1.47688394e+00f,+6.94087672e-01f,+3.53752082e-01f,-5.91020106e-01f,-5.30211444e-02f,
-1.58271960e+00f,+2.09798178e-01f,+1.30783901e+00f,+1.52394140e-01f,-1.22181130e+00f,
-4.39063225e-01f,+1.55670057e+00f,-3.70780287e-01f,-1.76612436e+00f,}; 
k2c_tensor test7_input_1_20_input = {&test7_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test7_array[4] = {
+3.60591739e-01f,+1.84829980e-01f,+2.21400604e-01f,+3.62411439e-01f,}; 
k2c_tensor keras_dense_3_20_test7 = {&keras_dense_3_20_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test7_array[4] = {0}; 
k2c_tensor c_dense_3_20_test7 = {&c_dense_3_20_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_20_input_array[14] = {
-8.16116528e-01f,-1.05402661e+00f,+1.82765088e-01f,+1.87588987e+00f,-5.34242001e-01f,
+1.70157322e+00f,+1.23650200e+00f,-2.59234406e-01f,+1.16181647e+00f,-2.11805888e-01f,
+1.99929493e+00f,+1.64492227e+00f,+6.22622618e-01f,+1.87631810e-01f,}; 
k2c_tensor test8_input_1_20_input = {&test8_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test8_array[4] = {
-3.25589627e-02f,+2.10391462e-01f,+4.10958558e-01f,+6.12956524e-01f,}; 
k2c_tensor keras_dense_3_20_test8 = {&keras_dense_3_20_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test8_array[4] = {0}; 
k2c_tensor c_dense_3_20_test8 = {&c_dense_3_20_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_20_input_array[14] = {
+1.97995716e+00f,+1.15549527e+00f,-7.91841509e-02f,+1.74197169e-01f,+7.79450471e-02f,
-3.54432217e-01f,-7.65083226e-01f,+1.23982055e+00f,-1.49365584e+00f,-1.56505030e-01f,
-1.90948609e+00f,-1.13652703e+00f,+7.39584272e-01f,+1.36972700e+00f,}; 
k2c_tensor test9_input_1_20_input = {&test9_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test9_array[4] = {
-2.92630583e-01f,+1.29522890e-01f,+2.91310012e-01f,-2.28753556e-02f,}; 
k2c_tensor keras_dense_3_20_test9 = {&keras_dense_3_20_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test9_array[4] = {0}; 
k2c_tensor c_dense_3_20_test9 = {&c_dense_3_20_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_20_input_array[14] = {
+1.12878870e+00f,-1.10715134e-01f,+1.97789179e+00f,-1.17739412e+00f,+1.10933790e+00f,
-7.84435314e-01f,-1.79888682e+00f,+1.87179667e+00f,+9.44665792e-01f,+8.28965099e-01f,
-2.20977994e-01f,+1.46471058e+00f,+5.96976882e-01f,-1.88281088e+00f,}; 
k2c_tensor test10_input_1_20_input = {&test10_input_1_20_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_20_test10_array[4] = {
-3.11547332e-02f,+5.74566305e-01f,+9.24155533e-01f,+1.92339361e-01f,}; 
k2c_tensor keras_dense_3_20_test10 = {&keras_dense_3_20_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_20_test10_array[4] = {0}; 
k2c_tensor c_dense_3_20_test10 = {&c_dense_3_20_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC4_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC4_xmode(&test1_input_1_20_input,&c_dense_3_20_test1); 
torbeam_EC4_xmode(&test2_input_1_20_input,&c_dense_3_20_test2); 
torbeam_EC4_xmode(&test3_input_1_20_input,&c_dense_3_20_test3); 
torbeam_EC4_xmode(&test4_input_1_20_input,&c_dense_3_20_test4); 
torbeam_EC4_xmode(&test5_input_1_20_input,&c_dense_3_20_test5); 
torbeam_EC4_xmode(&test6_input_1_20_input,&c_dense_3_20_test6); 
torbeam_EC4_xmode(&test7_input_1_20_input,&c_dense_3_20_test7); 
torbeam_EC4_xmode(&test8_input_1_20_input,&c_dense_3_20_test8); 
torbeam_EC4_xmode(&test9_input_1_20_input,&c_dense_3_20_test9); 
torbeam_EC4_xmode(&test10_input_1_20_input,&c_dense_3_20_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_20_test1,&c_dense_3_20_test1); 
errors[1] = maxabs(&keras_dense_3_20_test2,&c_dense_3_20_test2); 
errors[2] = maxabs(&keras_dense_3_20_test3,&c_dense_3_20_test3); 
errors[3] = maxabs(&keras_dense_3_20_test4,&c_dense_3_20_test4); 
errors[4] = maxabs(&keras_dense_3_20_test5,&c_dense_3_20_test5); 
errors[5] = maxabs(&keras_dense_3_20_test6,&c_dense_3_20_test6); 
errors[6] = maxabs(&keras_dense_3_20_test7,&c_dense_3_20_test7); 
errors[7] = maxabs(&keras_dense_3_20_test8,&c_dense_3_20_test8); 
errors[8] = maxabs(&keras_dense_3_20_test9,&c_dense_3_20_test9); 
errors[9] = maxabs(&keras_dense_3_20_test10,&c_dense_3_20_test10); 
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

