#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC5_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_17_input_array[14] = {
-6.57005389e-01f,+1.75378964e+00f,-1.59587584e+00f,+1.72839920e-01f,-5.39837593e-01f,
-4.33158600e-01f,-1.95269195e-01f,+7.80116694e-01f,-5.39627952e-01f,+5.65809628e-01f,
-3.00912198e-01f,-1.74195630e+00f,+7.40623100e-02f,+1.03630112e+00f,}; 
k2c_tensor test1_input_1_17_input = {&test1_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test1_array[4] = {
+5.52715540e-01f,+2.94851303e-01f,+2.44044900e-01f,-4.20288622e-01f,}; 
k2c_tensor keras_dense_3_17_test1 = {&keras_dense_3_17_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test1_array[4] = {0}; 
k2c_tensor c_dense_3_17_test1 = {&c_dense_3_17_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_17_input_array[14] = {
+1.59135273e-01f,-9.43104642e-01f,-7.57980525e-01f,+1.74673714e+00f,+1.91056329e+00f,
+2.88070595e-01f,+1.94419916e+00f,-1.04597695e+00f,-1.44779806e+00f,-9.78101436e-01f,
+3.50689704e-01f,+1.61933230e-01f,+1.48677925e+00f,+1.73529400e+00f,}; 
k2c_tensor test2_input_1_17_input = {&test2_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test2_array[4] = {
-1.48875549e-01f,+2.71902885e-02f,-6.11582518e-01f,-9.16256756e-02f,}; 
k2c_tensor keras_dense_3_17_test2 = {&keras_dense_3_17_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test2_array[4] = {0}; 
k2c_tensor c_dense_3_17_test2 = {&c_dense_3_17_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_17_input_array[14] = {
+1.31673197e+00f,-3.77160023e-01f,+1.47764459e+00f,+1.10360566e+00f,-1.81578769e+00f,
-1.35263662e+00f,+2.54550049e-01f,-6.09750181e-01f,-2.70906631e-01f,+4.71422363e-01f,
+1.81886322e+00f,+1.25799264e+00f,+8.82531682e-01f,+1.62968163e+00f,}; 
k2c_tensor test3_input_1_17_input = {&test3_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test3_array[4] = {
-4.52357121e-02f,-2.02201709e-01f,-7.20503390e-01f,-4.15525645e-01f,}; 
k2c_tensor keras_dense_3_17_test3 = {&keras_dense_3_17_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test3_array[4] = {0}; 
k2c_tensor c_dense_3_17_test3 = {&c_dense_3_17_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_17_input_array[14] = {
+4.44759679e-01f,+8.40157888e-01f,-1.55172819e+00f,+1.31671493e+00f,-1.29410833e-01f,
-1.00886087e+00f,+1.39373775e+00f,+1.44985622e+00f,-7.84269300e-02f,-9.94102138e-01f,
-1.74963790e+00f,-8.59685602e-01f,+1.03834533e+00f,+1.87615941e+00f,}; 
k2c_tensor test4_input_1_17_input = {&test4_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test4_array[4] = {
-3.07876598e-02f,+2.87261397e-01f,-6.71934411e-02f,-1.35764688e-01f,}; 
k2c_tensor keras_dense_3_17_test4 = {&keras_dense_3_17_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test4_array[4] = {0}; 
k2c_tensor c_dense_3_17_test4 = {&c_dense_3_17_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_17_input_array[14] = {
-1.66584810e+00f,-1.67054542e+00f,-1.76181595e+00f,+2.95782314e-01f,+2.48783698e-01f,
+1.40162836e+00f,-1.99989506e-01f,-3.89436548e-01f,-5.75460024e-01f,-1.73351402e-01f,
+1.60994541e-01f,-2.15532396e-01f,+4.37276138e-03f,-1.02390237e+00f,}; 
k2c_tensor test5_input_1_17_input = {&test5_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test5_array[4] = {
+6.55984804e-02f,+6.11516684e-02f,-1.06609769e-01f,-1.35321051e-01f,}; 
k2c_tensor keras_dense_3_17_test5 = {&keras_dense_3_17_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test5_array[4] = {0}; 
k2c_tensor c_dense_3_17_test5 = {&c_dense_3_17_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_17_input_array[14] = {
-1.84870060e+00f,+8.56320899e-01f,-6.44308520e-01f,-6.27973144e-01f,+6.37559410e-01f,
+1.77868086e+00f,+1.49996042e-01f,-1.25064678e+00f,-1.77848701e+00f,+1.77909481e+00f,
-2.56368805e-01f,-1.23670799e+00f,+1.95540696e+00f,+1.68000413e+00f,}; 
k2c_tensor test6_input_1_17_input = {&test6_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test6_array[4] = {
+1.63035486e-02f,+2.62627691e-01f,+5.61403818e-02f,-3.34410518e-01f,}; 
k2c_tensor keras_dense_3_17_test6 = {&keras_dense_3_17_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test6_array[4] = {0}; 
k2c_tensor c_dense_3_17_test6 = {&c_dense_3_17_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_17_input_array[14] = {
+8.74156411e-01f,+2.98169700e-01f,+7.87916820e-01f,+1.99950568e+00f,+1.97607903e+00f,
+2.60500160e-01f,-8.59581180e-01f,+2.01260574e-01f,-1.46263023e+00f,+4.93156305e-01f,
+4.71215342e-01f,+6.91974298e-01f,+1.16073854e-01f,-1.51710974e+00f,}; 
k2c_tensor test7_input_1_17_input = {&test7_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test7_array[4] = {
+3.07033002e-01f,+9.25894305e-02f,-2.77035553e-02f,-1.56092614e-01f,}; 
k2c_tensor keras_dense_3_17_test7 = {&keras_dense_3_17_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test7_array[4] = {0}; 
k2c_tensor c_dense_3_17_test7 = {&c_dense_3_17_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_17_input_array[14] = {
+1.12340996e-01f,-5.98672347e-01f,+2.48132475e-01f,-6.89070270e-01f,+4.05335985e-01f,
-9.04120270e-01f,+9.44334295e-01f,-7.10582525e-01f,-9.93952966e-01f,-5.62134921e-01f,
-3.44309611e-01f,+1.43825479e+00f,-4.99993732e-01f,+4.14749091e-01f,}; 
k2c_tensor test8_input_1_17_input = {&test8_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test8_array[4] = {
-1.94040284e-01f,-9.79172532e-03f,-4.05924082e-01f,-3.47527936e-02f,}; 
k2c_tensor keras_dense_3_17_test8 = {&keras_dense_3_17_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test8_array[4] = {0}; 
k2c_tensor c_dense_3_17_test8 = {&c_dense_3_17_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_17_input_array[14] = {
-4.50716275e-01f,-8.85086468e-01f,+1.31039027e+00f,+1.73237100e+00f,+8.52887547e-01f,
+1.16777522e+00f,-1.69124935e+00f,+2.39112521e-01f,-1.63205818e+00f,+8.42707247e-01f,
-1.60395569e+00f,-7.59379313e-01f,+3.71099913e-01f,-8.27047249e-01f,}; 
k2c_tensor test9_input_1_17_input = {&test9_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test9_array[4] = {
+7.36547709e-01f,+1.84793413e-01f,+2.46159330e-01f,-3.68483156e-01f,}; 
k2c_tensor keras_dense_3_17_test9 = {&keras_dense_3_17_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test9_array[4] = {0}; 
k2c_tensor c_dense_3_17_test9 = {&c_dense_3_17_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_17_input_array[14] = {
-1.89725377e+00f,+6.04438192e-01f,-1.63004608e+00f,+2.79940965e-01f,-3.87177985e-01f,
+1.02935309e+00f,+1.81312735e-01f,-4.84556751e-01f,+1.89803531e+00f,+3.28099258e-01f,
+3.95662030e-01f,-5.78864507e-02f,+9.42876630e-01f,+1.09230710e+00f,}; 
k2c_tensor test10_input_1_17_input = {&test10_input_1_17_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_17_test10_array[4] = {
+3.22280347e-01f,+1.25784293e-01f,+5.36231920e-02f,-1.57934532e-01f,}; 
k2c_tensor keras_dense_3_17_test10 = {&keras_dense_3_17_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_17_test10_array[4] = {0}; 
k2c_tensor c_dense_3_17_test10 = {&c_dense_3_17_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC5_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC5_omode(&test1_input_1_17_input,&c_dense_3_17_test1); 
torbeam_EC5_omode(&test2_input_1_17_input,&c_dense_3_17_test2); 
torbeam_EC5_omode(&test3_input_1_17_input,&c_dense_3_17_test3); 
torbeam_EC5_omode(&test4_input_1_17_input,&c_dense_3_17_test4); 
torbeam_EC5_omode(&test5_input_1_17_input,&c_dense_3_17_test5); 
torbeam_EC5_omode(&test6_input_1_17_input,&c_dense_3_17_test6); 
torbeam_EC5_omode(&test7_input_1_17_input,&c_dense_3_17_test7); 
torbeam_EC5_omode(&test8_input_1_17_input,&c_dense_3_17_test8); 
torbeam_EC5_omode(&test9_input_1_17_input,&c_dense_3_17_test9); 
torbeam_EC5_omode(&test10_input_1_17_input,&c_dense_3_17_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_17_test1,&c_dense_3_17_test1); 
errors[1] = maxabs(&keras_dense_3_17_test2,&c_dense_3_17_test2); 
errors[2] = maxabs(&keras_dense_3_17_test3,&c_dense_3_17_test3); 
errors[3] = maxabs(&keras_dense_3_17_test4,&c_dense_3_17_test4); 
errors[4] = maxabs(&keras_dense_3_17_test5,&c_dense_3_17_test5); 
errors[5] = maxabs(&keras_dense_3_17_test6,&c_dense_3_17_test6); 
errors[6] = maxabs(&keras_dense_3_17_test7,&c_dense_3_17_test7); 
errors[7] = maxabs(&keras_dense_3_17_test8,&c_dense_3_17_test8); 
errors[8] = maxabs(&keras_dense_3_17_test9,&c_dense_3_17_test9); 
errors[9] = maxabs(&keras_dense_3_17_test10,&c_dense_3_17_test10); 
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

