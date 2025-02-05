#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_13_input_array[14] = {
+5.91231036e-01f,+1.56108034e+00f,+1.20027295e+00f,+1.80541378e+00f,-1.41565028e+00f,
-2.90868106e-01f,+2.97651717e-01f,+1.34042371e-01f,-5.55122905e-01f,+9.31784712e-01f,
+1.17268489e+00f,+4.11032789e-01f,+8.61334317e-01f,-1.67665835e+00f,}; 
k2c_tensor test1_input_1_13_input = {&test1_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test1_array[4] = {
+3.14638376e-01f,-2.70942599e-01f,+1.16534196e-01f,+5.22174276e-02f,}; 
k2c_tensor keras_dense_3_13_test1 = {&keras_dense_3_13_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test1_array[4] = {0}; 
k2c_tensor c_dense_3_13_test1 = {&c_dense_3_13_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_13_input_array[14] = {
-5.27843823e-01f,+9.44459359e-01f,-3.14135236e-01f,+7.18490281e-01f,+7.47622327e-01f,
+1.69358489e-01f,-9.31205441e-01f,+1.78752589e+00f,+7.91187406e-01f,+1.93333291e+00f,
-2.44147098e-01f,-1.80769635e+00f,+1.21547648e+00f,+1.79525546e+00f,}; 
k2c_tensor test2_input_1_13_input = {&test2_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test2_array[4] = {
+6.84248626e-01f,-3.53694975e-01f,+6.07000053e-01f,+1.44107923e-01f,}; 
k2c_tensor keras_dense_3_13_test2 = {&keras_dense_3_13_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test2_array[4] = {0}; 
k2c_tensor c_dense_3_13_test2 = {&c_dense_3_13_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_13_input_array[14] = {
-5.21114851e-01f,-6.94153259e-01f,-8.77374111e-01f,+9.08798225e-01f,+2.04505894e-01f,
+1.81068309e-01f,+7.00253319e-01f,+1.96277956e+00f,+1.61194554e+00f,-1.67847050e+00f,
-1.93754666e+00f,-5.50470626e-01f,+1.07995827e+00f,+1.15132668e+00f,}; 
k2c_tensor test3_input_1_13_input = {&test3_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test3_array[4] = {
+5.69895744e-01f,-2.04365119e-01f,+4.84878361e-01f,-2.03806683e-01f,}; 
k2c_tensor keras_dense_3_13_test3 = {&keras_dense_3_13_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test3_array[4] = {0}; 
k2c_tensor c_dense_3_13_test3 = {&c_dense_3_13_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_13_input_array[14] = {
-7.42607912e-04f,-3.71712766e-01f,-6.83154449e-01f,+1.42475817e+00f,-5.23781329e-01f,
+1.42723817e+00f,+1.12228614e+00f,-1.10427027e+00f,-9.50782716e-01f,+1.66010295e+00f,
-1.36550436e+00f,+1.62858315e+00f,+3.89353420e-02f,-1.55153198e+00f,}; 
k2c_tensor test4_input_1_13_input = {&test4_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test4_array[4] = {
+4.66366336e-02f,-2.82070249e-01f,+1.92769125e-01f,-6.12028688e-02f,}; 
k2c_tensor keras_dense_3_13_test4 = {&keras_dense_3_13_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test4_array[4] = {0}; 
k2c_tensor c_dense_3_13_test4 = {&c_dense_3_13_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_13_input_array[14] = {
+1.56138697e+00f,+1.67702414e+00f,-1.75277752e+00f,-1.47109857e+00f,+7.13510023e-02f,
-9.76418565e-01f,+5.55787484e-01f,-1.86129409e+00f,+1.57326225e+00f,-1.29312076e+00f,
+1.11161087e-01f,+6.22242351e-01f,+1.59599517e+00f,-1.55053923e+00f,}; 
k2c_tensor test5_input_1_13_input = {&test5_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test5_array[4] = {
+2.16547251e-02f,-4.97759581e-01f,+1.79320306e-01f,-2.36824483e-01f,}; 
k2c_tensor keras_dense_3_13_test5 = {&keras_dense_3_13_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test5_array[4] = {0}; 
k2c_tensor c_dense_3_13_test5 = {&c_dense_3_13_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_13_input_array[14] = {
+1.58972735e-01f,-1.26812316e+00f,+7.85784140e-01f,+1.94330039e+00f,-3.80558297e-01f,
-7.92574670e-01f,-1.01315101e+00f,+5.63331468e-01f,-1.66585791e+00f,-9.33447750e-01f,
-1.28336873e+00f,+4.81490720e-02f,+5.04693815e-01f,-1.99685147e+00f,}; 
k2c_tensor test6_input_1_13_input = {&test6_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test6_array[4] = {
+2.21139073e-01f,-2.43545063e-02f,+1.67920843e-01f,+2.98698545e-01f,}; 
k2c_tensor keras_dense_3_13_test6 = {&keras_dense_3_13_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test6_array[4] = {0}; 
k2c_tensor c_dense_3_13_test6 = {&c_dense_3_13_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_13_input_array[14] = {
-1.62836270e+00f,+1.31540325e+00f,+1.92897953e+00f,-9.93418306e-01f,+1.72309166e+00f,
+1.50894144e+00f,+6.46819291e-01f,+5.69351259e-01f,+1.52934613e-01f,+6.58144755e-01f,
+1.16943252e+00f,+1.19990279e+00f,+2.80699715e-01f,+1.50994491e-01f,}; 
k2c_tensor test7_input_1_13_input = {&test7_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test7_array[4] = {
+3.85852039e-01f,-3.06698948e-01f,+3.10992897e-01f,+1.78555995e-01f,}; 
k2c_tensor keras_dense_3_13_test7 = {&keras_dense_3_13_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test7_array[4] = {0}; 
k2c_tensor c_dense_3_13_test7 = {&c_dense_3_13_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_13_input_array[14] = {
+1.23903937e+00f,+1.13323082e+00f,-2.44445600e-01f,-3.99126237e-01f,-1.95806148e+00f,
-1.66356172e+00f,-1.33970512e+00f,-1.75322223e-01f,-2.95241095e-01f,-5.98836403e-01f,
+9.92276813e-02f,+2.88568833e-01f,+1.37719238e+00f,-1.11315870e+00f,}; 
k2c_tensor test8_input_1_13_input = {&test8_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test8_array[4] = {
+4.66955394e-01f,-1.19655684e-01f,+2.11075023e-01f,+8.92869160e-02f,}; 
k2c_tensor keras_dense_3_13_test8 = {&keras_dense_3_13_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test8_array[4] = {0}; 
k2c_tensor c_dense_3_13_test8 = {&c_dense_3_13_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_13_input_array[14] = {
+1.48391620e+00f,+1.49649201e+00f,-1.76252153e+00f,-1.46494073e+00f,-1.62056150e+00f,
+1.59570841e+00f,-3.16855223e-01f,+4.94543247e-01f,+5.73107644e-01f,-4.50243166e-01f,
-5.76480576e-01f,+8.88550262e-01f,+1.22689474e+00f,-1.17307768e+00f,}; 
k2c_tensor test9_input_1_13_input = {&test9_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test9_array[4] = {
+3.35634053e-01f,-2.60887533e-01f,+2.38477975e-01f,+6.65444732e-02f,}; 
k2c_tensor keras_dense_3_13_test9 = {&keras_dense_3_13_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test9_array[4] = {0}; 
k2c_tensor c_dense_3_13_test9 = {&c_dense_3_13_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_13_input_array[14] = {
-1.84068314e+00f,+9.54069471e-01f,-1.06949733e+00f,+5.82989453e-01f,-1.29877764e+00f,
-2.86966192e-01f,-1.14819045e+00f,+1.97294326e+00f,+1.74319521e+00f,-4.67361571e-01f,
-1.94494731e+00f,-1.43405549e+00f,+1.22191836e+00f,-8.43205081e-01f,}; 
k2c_tensor test10_input_1_13_input = {&test10_input_1_13_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_13_test10_array[4] = {
+7.96959579e-01f,-9.62754060e-03f,+6.00841403e-01f,-1.58920567e-02f,}; 
k2c_tensor keras_dense_3_13_test10 = {&keras_dense_3_13_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_13_test10_array[4] = {0}; 
k2c_tensor c_dense_3_13_test10 = {&c_dense_3_13_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_omode(&test1_input_1_13_input,&c_dense_3_13_test1); 
torbeam_EC2_omode(&test2_input_1_13_input,&c_dense_3_13_test2); 
torbeam_EC2_omode(&test3_input_1_13_input,&c_dense_3_13_test3); 
torbeam_EC2_omode(&test4_input_1_13_input,&c_dense_3_13_test4); 
torbeam_EC2_omode(&test5_input_1_13_input,&c_dense_3_13_test5); 
torbeam_EC2_omode(&test6_input_1_13_input,&c_dense_3_13_test6); 
torbeam_EC2_omode(&test7_input_1_13_input,&c_dense_3_13_test7); 
torbeam_EC2_omode(&test8_input_1_13_input,&c_dense_3_13_test8); 
torbeam_EC2_omode(&test9_input_1_13_input,&c_dense_3_13_test9); 
torbeam_EC2_omode(&test10_input_1_13_input,&c_dense_3_13_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_13_test1,&c_dense_3_13_test1); 
errors[1] = maxabs(&keras_dense_3_13_test2,&c_dense_3_13_test2); 
errors[2] = maxabs(&keras_dense_3_13_test3,&c_dense_3_13_test3); 
errors[3] = maxabs(&keras_dense_3_13_test4,&c_dense_3_13_test4); 
errors[4] = maxabs(&keras_dense_3_13_test5,&c_dense_3_13_test5); 
errors[5] = maxabs(&keras_dense_3_13_test6,&c_dense_3_13_test6); 
errors[6] = maxabs(&keras_dense_3_13_test7,&c_dense_3_13_test7); 
errors[7] = maxabs(&keras_dense_3_13_test8,&c_dense_3_13_test8); 
errors[8] = maxabs(&keras_dense_3_13_test9,&c_dense_3_13_test9); 
errors[9] = maxabs(&keras_dense_3_13_test10,&c_dense_3_13_test10); 
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

