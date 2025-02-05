#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_6_input_array[14] = {
+1.09637591e+00f,-1.87663713e-01f,-7.73076617e-01f,-1.46925904e+00f,+4.05003793e-01f,
-1.30258289e+00f,-1.68936303e+00f,-1.53981069e+00f,+1.66606432e+00f,-3.02895784e-01f,
-5.45251474e-01f,-1.12994901e+00f,+5.20973701e-01f,+1.99368760e+00f,}; 
k2c_tensor test1_input_1_6_input = {&test1_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test1_array[4] = {
-3.91342975e-02f,+3.13108712e-02f,+2.17432991e-01f,-8.26802030e-02f,}; 
k2c_tensor keras_dense_3_6_test1 = {&keras_dense_3_6_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test1_array[4] = {0}; 
k2c_tensor c_dense_3_6_test1 = {&c_dense_3_6_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_6_input_array[14] = {
+2.54733702e-01f,+1.47293642e+00f,+9.93343287e-01f,-1.13165645e+00f,+1.13189968e+00f,
+1.54928672e+00f,+1.29063216e+00f,+1.87140939e+00f,-1.34714465e+00f,+2.79817127e-01f,
-1.04040316e+00f,+1.65428907e+00f,+1.06696161e+00f,-3.50613896e-02f,}; 
k2c_tensor test2_input_1_6_input = {&test2_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test2_array[4] = {
-6.50693029e-02f,-1.84477061e-01f,+2.22299412e-01f,-8.19806457e-02f,}; 
k2c_tensor keras_dense_3_6_test2 = {&keras_dense_3_6_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test2_array[4] = {0}; 
k2c_tensor c_dense_3_6_test2 = {&c_dense_3_6_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_6_input_array[14] = {
+1.34306191e+00f,+1.01382144e+00f,-1.26828976e+00f,-2.54286537e-01f,-1.82578116e+00f,
-1.51396925e+00f,-9.85066410e-01f,-6.43806739e-01f,+1.71793085e+00f,+7.32228322e-01f,
-1.83918542e+00f,-1.38310402e+00f,-9.22395519e-01f,-1.68374771e-01f,}; 
k2c_tensor test3_input_1_6_input = {&test3_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test3_array[4] = {
-2.83307225e-01f,+2.45560035e-01f,+2.81397346e-02f,+2.33496234e-01f,}; 
k2c_tensor keras_dense_3_6_test3 = {&keras_dense_3_6_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test3_array[4] = {0}; 
k2c_tensor c_dense_3_6_test3 = {&c_dense_3_6_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_6_input_array[14] = {
-1.94560025e+00f,+1.70511487e+00f,-1.11901119e+00f,+1.95331217e+00f,-1.26980344e+00f,
-3.50653161e-01f,+1.95533866e+00f,-1.66437490e+00f,+4.84896083e-01f,+1.96716103e+00f,
+8.88067564e-02f,-6.08547135e-01f,-1.84416414e+00f,+5.21520641e-01f,}; 
k2c_tensor test4_input_1_6_input = {&test4_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test4_array[4] = {
-2.73694038e-01f,+9.25529674e-02f,+3.01485267e-02f,-3.98342907e-02f,}; 
k2c_tensor keras_dense_3_6_test4 = {&keras_dense_3_6_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test4_array[4] = {0}; 
k2c_tensor c_dense_3_6_test4 = {&c_dense_3_6_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_6_input_array[14] = {
+7.82472744e-01f,+6.83909903e-01f,+1.50180735e+00f,-1.07312177e+00f,+9.48000454e-03f,
-1.54862618e+00f,+9.73507197e-01f,+4.52860728e-01f,-1.88789555e+00f,-1.59715027e+00f,
-2.42899499e-01f,+4.96170120e-01f,+1.90225289e-01f,+1.23542871e+00f,}; 
k2c_tensor test5_input_1_6_input = {&test5_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test5_array[4] = {
+4.73119877e-02f,+2.40515783e-01f,+1.23711482e-01f,+1.88782901e-01f,}; 
k2c_tensor keras_dense_3_6_test5 = {&keras_dense_3_6_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test5_array[4] = {0}; 
k2c_tensor c_dense_3_6_test5 = {&c_dense_3_6_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_6_input_array[14] = {
-1.55363987e+00f,+1.25571894e-01f,-1.33332141e+00f,+4.12104478e-01f,-1.84678461e+00f,
-1.96162541e+00f,-1.59668935e-01f,-4.24456604e-01f,+9.10664166e-01f,-8.20339984e-01f,
+1.73874344e+00f,+3.09324347e-01f,-2.64079586e-01f,+7.49435485e-02f,}; 
k2c_tensor test6_input_1_6_input = {&test6_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test6_array[4] = {
-2.66448140e-01f,+3.96491364e-02f,-1.41353637e-01f,+1.82402074e-01f,}; 
k2c_tensor keras_dense_3_6_test6 = {&keras_dense_3_6_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test6_array[4] = {0}; 
k2c_tensor c_dense_3_6_test6 = {&c_dense_3_6_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_6_input_array[14] = {
+9.59630799e-01f,-8.67956009e-01f,+8.79283840e-01f,-1.52325005e-02f,-4.40664311e-01f,
-5.73959114e-01f,-4.13577454e-01f,+1.19159530e+00f,-1.31098600e+00f,-1.32544569e+00f,
+4.82990173e-01f,-1.54860978e+00f,-7.09189388e-01f,-9.59108496e-01f,}; 
k2c_tensor test7_input_1_6_input = {&test7_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test7_array[4] = {
+1.64242476e-01f,+3.64153758e-02f,+3.20134848e-01f,+1.77002341e-01f,}; 
k2c_tensor keras_dense_3_6_test7 = {&keras_dense_3_6_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test7_array[4] = {0}; 
k2c_tensor c_dense_3_6_test7 = {&c_dense_3_6_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_6_input_array[14] = {
-1.33557107e+00f,-9.59546015e-01f,-1.49980026e+00f,-1.96602351e+00f,-2.66002393e-01f,
+7.61407338e-01f,+1.32130296e+00f,-1.78201324e+00f,+4.66452533e-01f,+1.56469419e+00f,
+1.42259708e+00f,+2.69984944e-01f,+7.04947206e-01f,+2.72541101e-01f,}; 
k2c_tensor test8_input_1_6_input = {&test8_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test8_array[4] = {
-1.04680888e-01f,-2.00430423e-01f,-3.96750599e-01f,+5.15521280e-02f,}; 
k2c_tensor keras_dense_3_6_test8 = {&keras_dense_3_6_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test8_array[4] = {0}; 
k2c_tensor c_dense_3_6_test8 = {&c_dense_3_6_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_6_input_array[14] = {
+1.31772792e+00f,+1.30083644e+00f,-1.63456832e+00f,-5.25813788e-01f,-1.37595189e+00f,
-1.37872904e+00f,-8.79094342e-02f,-6.86356648e-01f,-1.79502131e+00f,+8.99718872e-01f,
-9.26352340e-01f,+1.59431839e+00f,-1.62376645e+00f,+1.52308864e+00f,}; 
k2c_tensor test9_input_1_6_input = {&test9_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test9_array[4] = {
-4.03739840e-01f,+4.71647590e-01f,+6.89316168e-02f,-6.13302831e-03f,}; 
k2c_tensor keras_dense_3_6_test9 = {&keras_dense_3_6_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test9_array[4] = {0}; 
k2c_tensor c_dense_3_6_test9 = {&c_dense_3_6_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_6_input_array[14] = {
-8.30252303e-01f,+4.75221907e-01f,+1.27231824e-02f,-7.78640607e-01f,+4.58509667e-01f,
-1.74505068e+00f,-1.68500836e+00f,-1.15557450e-01f,-1.09156278e+00f,-1.87991508e+00f,
+1.19059559e-01f,-1.12480137e+00f,-7.57082494e-01f,-3.44139873e-01f,}; 
k2c_tensor test10_input_1_6_input = {&test10_input_1_6_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_6_test10_array[4] = {
-6.86587766e-02f,+2.02121988e-01f,+1.42555788e-01f,-1.12258665e-01f,}; 
k2c_tensor keras_dense_3_6_test10 = {&keras_dense_3_6_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_6_test10_array[4] = {0}; 
k2c_tensor c_dense_3_6_test10 = {&c_dense_3_6_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_xmode(&test1_input_1_6_input,&c_dense_3_6_test1); 
torbeam_EC2_xmode(&test2_input_1_6_input,&c_dense_3_6_test2); 
torbeam_EC2_xmode(&test3_input_1_6_input,&c_dense_3_6_test3); 
torbeam_EC2_xmode(&test4_input_1_6_input,&c_dense_3_6_test4); 
torbeam_EC2_xmode(&test5_input_1_6_input,&c_dense_3_6_test5); 
torbeam_EC2_xmode(&test6_input_1_6_input,&c_dense_3_6_test6); 
torbeam_EC2_xmode(&test7_input_1_6_input,&c_dense_3_6_test7); 
torbeam_EC2_xmode(&test8_input_1_6_input,&c_dense_3_6_test8); 
torbeam_EC2_xmode(&test9_input_1_6_input,&c_dense_3_6_test9); 
torbeam_EC2_xmode(&test10_input_1_6_input,&c_dense_3_6_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_6_test1,&c_dense_3_6_test1); 
errors[1] = maxabs(&keras_dense_3_6_test2,&c_dense_3_6_test2); 
errors[2] = maxabs(&keras_dense_3_6_test3,&c_dense_3_6_test3); 
errors[3] = maxabs(&keras_dense_3_6_test4,&c_dense_3_6_test4); 
errors[4] = maxabs(&keras_dense_3_6_test5,&c_dense_3_6_test5); 
errors[5] = maxabs(&keras_dense_3_6_test6,&c_dense_3_6_test6); 
errors[6] = maxabs(&keras_dense_3_6_test7,&c_dense_3_6_test7); 
errors[7] = maxabs(&keras_dense_3_6_test8,&c_dense_3_6_test8); 
errors[8] = maxabs(&keras_dense_3_6_test9,&c_dense_3_6_test9); 
errors[9] = maxabs(&keras_dense_3_6_test10,&c_dense_3_6_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
torbeam_EC2_xmode_terminate(); 
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

