#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_omode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_19_input_array[14] = {
+7.50813202e-01f,-1.13936263e+00f,-9.23479852e-01f,+1.73864089e-01f,+3.95427692e-01f,
+1.95170540e-01f,+4.29597462e-01f,-7.09567516e-01f,+3.88683113e-02f,+1.13753783e-01f,
-3.02595564e-01f,+1.38994083e+00f,-7.09246523e-01f,+1.74605919e-01f,}; 
k2c_tensor test1_input_1_19_input = {&test1_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test1_array[4] = {
+9.09526646e-02f,+3.49347317e-03f,-1.92593217e-01f,+7.79790729e-02f,}; 
k2c_tensor keras_dense_3_19_test1 = {&keras_dense_3_19_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test1_array[4] = {0}; 
k2c_tensor c_dense_3_19_test1 = {&c_dense_3_19_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_19_input_array[14] = {
+4.66804021e-01f,-1.58139332e+00f,+1.54464824e+00f,-3.22329551e-01f,-1.43488837e+00f,
+4.05665879e-01f,+6.56217266e-01f,-1.07204627e-01f,+9.82750250e-01f,+1.35272706e+00f,
+1.30747079e+00f,+3.16282485e-01f,+1.84700958e+00f,+1.43119069e+00f,}; 
k2c_tensor test2_input_1_19_input = {&test2_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test2_array[4] = {
+1.34352028e-01f,+2.65005141e-01f,-1.79364622e-01f,-4.71731611e-02f,}; 
k2c_tensor keras_dense_3_19_test2 = {&keras_dense_3_19_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test2_array[4] = {0}; 
k2c_tensor c_dense_3_19_test2 = {&c_dense_3_19_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_19_input_array[14] = {
-5.53995421e-01f,-1.74960015e+00f,+1.50752757e+00f,+8.72549274e-01f,+4.81083846e-02f,
+3.81625793e-01f,-1.78128054e+00f,-8.25191182e-01f,-1.87371168e-01f,-1.82335344e+00f,
+1.40071486e+00f,+4.11036655e-01f,+1.09443306e+00f,+1.31060858e+00f,}; 
k2c_tensor test3_input_1_19_input = {&test3_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test3_array[4] = {
+3.04155163e-02f,-1.27402574e-01f,-1.80114970e-01f,-4.96884793e-01f,}; 
k2c_tensor keras_dense_3_19_test3 = {&keras_dense_3_19_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test3_array[4] = {0}; 
k2c_tensor c_dense_3_19_test3 = {&c_dense_3_19_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_19_input_array[14] = {
-7.95602424e-01f,-1.51499869e+00f,+3.63065482e-01f,-8.32437938e-01f,+4.72215680e-01f,
+1.09971304e+00f,+1.31005152e+00f,-1.70048523e+00f,-1.53118737e+00f,-1.38978400e+00f,
+5.21211002e-01f,+2.89128291e-01f,-1.09532930e+00f,-2.00902892e-02f,}; 
k2c_tensor test4_input_1_19_input = {&test4_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test4_array[4] = {
-2.94908676e-02f,+1.60059944e-01f,-1.38679385e-01f,+8.38217363e-02f,}; 
k2c_tensor keras_dense_3_19_test4 = {&keras_dense_3_19_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test4_array[4] = {0}; 
k2c_tensor c_dense_3_19_test4 = {&c_dense_3_19_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_19_input_array[14] = {
-8.36729799e-02f,+1.11352531e+00f,+1.92637254e-01f,+1.45396081e+00f,+1.50249531e+00f,
-1.84265479e-01f,-1.31427858e+00f,-1.35507588e+00f,-1.58457147e+00f,+1.44930884e+00f,
+3.52024141e-01f,-1.26091942e+00f,-1.41333627e+00f,-7.19351222e-01f,}; 
k2c_tensor test5_input_1_19_input = {&test5_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test5_array[4] = {
+8.18087533e-02f,-1.05500601e-01f,+2.01270312e-01f,+7.40227923e-02f,}; 
k2c_tensor keras_dense_3_19_test5 = {&keras_dense_3_19_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test5_array[4] = {0}; 
k2c_tensor c_dense_3_19_test5 = {&c_dense_3_19_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_19_input_array[14] = {
-1.38233737e+00f,+2.48867865e-01f,+1.48747325e+00f,-8.36602136e-01f,+4.86688942e-01f,
+2.53295357e-01f,+9.06704146e-01f,-1.17383631e+00f,+7.06905787e-01f,-4.81323935e-01f,
-1.16183509e+00f,-1.81926506e+00f,+5.74968945e-01f,-7.67000101e-02f,}; 
k2c_tensor test6_input_1_19_input = {&test6_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test6_array[4] = {
+6.14721067e-02f,+5.91806397e-02f,-1.29540056e-01f,-1.70215238e-02f,}; 
k2c_tensor keras_dense_3_19_test6 = {&keras_dense_3_19_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test6_array[4] = {0}; 
k2c_tensor c_dense_3_19_test6 = {&c_dense_3_19_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_19_input_array[14] = {
+3.36335472e-01f,-1.58079564e+00f,-1.14507892e-01f,+3.02734963e-02f,-1.36301670e+00f,
+9.58284858e-01f,+1.41551178e-01f,+1.99559942e+00f,+1.09223339e+00f,+1.27976059e+00f,
+1.28271104e+00f,-1.25647635e+00f,-8.14301806e-01f,-3.24492017e-01f,}; 
k2c_tensor test7_input_1_19_input = {&test7_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test7_array[4] = {
+4.66104150e-02f,+3.13161701e-01f,-3.00266802e-01f,+2.03325838e-01f,}; 
k2c_tensor keras_dense_3_19_test7 = {&keras_dense_3_19_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test7_array[4] = {0}; 
k2c_tensor c_dense_3_19_test7 = {&c_dense_3_19_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_19_input_array[14] = {
-1.66415413e+00f,-1.40207857e+00f,-1.29320462e+00f,-4.13824658e-01f,-5.43140796e-02f,
+1.44521217e+00f,-7.58426502e-01f,+7.20243700e-01f,-1.60980912e+00f,+9.97996129e-01f,
-1.08508063e+00f,+1.42628619e+00f,+1.00999188e+00f,-6.95836141e-01f,}; 
k2c_tensor test8_input_1_19_input = {&test8_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test8_array[4] = {
+7.18518673e-03f,-8.00268725e-02f,+6.43246174e-02f,-8.86391476e-02f,}; 
k2c_tensor keras_dense_3_19_test8 = {&keras_dense_3_19_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test8_array[4] = {0}; 
k2c_tensor c_dense_3_19_test8 = {&c_dense_3_19_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_19_input_array[14] = {
-7.79833120e-01f,+7.79387052e-01f,-3.33810989e-01f,+1.24314017e+00f,+7.55484251e-01f,
+1.79183277e+00f,+3.59121847e-01f,+1.54372957e+00f,+1.69938568e+00f,-5.64544412e-01f,
+1.43250891e+00f,-1.11861582e+00f,+1.88856052e+00f,-8.61946902e-01f,}; 
k2c_tensor test9_input_1_19_input = {&test9_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test9_array[4] = {
+9.45632719e-03f,+3.19438308e-01f,+1.17712289e-01f,-1.35329530e-01f,}; 
k2c_tensor keras_dense_3_19_test9 = {&keras_dense_3_19_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test9_array[4] = {0}; 
k2c_tensor c_dense_3_19_test9 = {&c_dense_3_19_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_19_input_array[14] = {
+6.96763652e-01f,-9.99263527e-01f,-1.06345787e+00f,+1.00087317e+00f,+7.72247645e-01f,
+1.67485232e+00f,-9.43421555e-01f,+8.29798989e-01f,-1.94141162e+00f,+6.31621276e-01f,
-1.65810855e+00f,+9.73837561e-01f,+1.47707199e+00f,+7.28761961e-01f,}; 
k2c_tensor test10_input_1_19_input = {&test10_input_1_19_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_19_test10_array[4] = {
-1.25927329e-01f,-3.18591893e-01f,+3.98013778e-02f,-5.01206636e-01f,}; 
k2c_tensor keras_dense_3_19_test10 = {&keras_dense_3_19_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_19_test10_array[4] = {0}; 
k2c_tensor c_dense_3_19_test10 = {&c_dense_3_19_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_omode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_omode(&test1_input_1_19_input,&c_dense_3_19_test1); 
torbeam_EC2_omode(&test2_input_1_19_input,&c_dense_3_19_test2); 
torbeam_EC2_omode(&test3_input_1_19_input,&c_dense_3_19_test3); 
torbeam_EC2_omode(&test4_input_1_19_input,&c_dense_3_19_test4); 
torbeam_EC2_omode(&test5_input_1_19_input,&c_dense_3_19_test5); 
torbeam_EC2_omode(&test6_input_1_19_input,&c_dense_3_19_test6); 
torbeam_EC2_omode(&test7_input_1_19_input,&c_dense_3_19_test7); 
torbeam_EC2_omode(&test8_input_1_19_input,&c_dense_3_19_test8); 
torbeam_EC2_omode(&test9_input_1_19_input,&c_dense_3_19_test9); 
torbeam_EC2_omode(&test10_input_1_19_input,&c_dense_3_19_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_19_test1,&c_dense_3_19_test1); 
errors[1] = maxabs(&keras_dense_3_19_test2,&c_dense_3_19_test2); 
errors[2] = maxabs(&keras_dense_3_19_test3,&c_dense_3_19_test3); 
errors[3] = maxabs(&keras_dense_3_19_test4,&c_dense_3_19_test4); 
errors[4] = maxabs(&keras_dense_3_19_test5,&c_dense_3_19_test5); 
errors[5] = maxabs(&keras_dense_3_19_test6,&c_dense_3_19_test6); 
errors[6] = maxabs(&keras_dense_3_19_test7,&c_dense_3_19_test7); 
errors[7] = maxabs(&keras_dense_3_19_test8,&c_dense_3_19_test8); 
errors[8] = maxabs(&keras_dense_3_19_test9,&c_dense_3_19_test9); 
errors[9] = maxabs(&keras_dense_3_19_test10,&c_dense_3_19_test10); 
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

