#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "torbeam_EC2_xmode.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_1_18_input_array[14] = {
-1.57948585e+00f,-1.94538032e+00f,+1.14858644e+00f,+9.60182528e-02f,+1.04740635e+00f,
-1.51610216e+00f,-1.84225846e+00f,-4.87958589e-01f,-9.84644566e-01f,-1.95928216e+00f,
+1.06825996e+00f,-5.75263201e-01f,-6.76430695e-01f,+1.18540178e+00f,}; 
k2c_tensor test1_input_1_18_input = {&test1_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test1_array[4] = {
-3.90094705e-02f,-4.75578278e-01f,-8.44932497e-02f,-2.51634538e-01f,}; 
k2c_tensor keras_dense_3_18_test1 = {&keras_dense_3_18_test1_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test1_array[4] = {0}; 
k2c_tensor c_dense_3_18_test1 = {&c_dense_3_18_test1_array[0],1,4,{4,1,1,1,1}}; 
float test2_input_1_18_input_array[14] = {
+1.21598568e-02f,+1.48459873e+00f,+1.96533531e+00f,+1.64781874e+00f,-7.97030730e-01f,
-1.00997581e+00f,+1.26724884e+00f,-1.05967851e+00f,+5.72286216e-01f,+1.74114078e+00f,
+1.71432708e+00f,+1.52316368e+00f,-1.06720275e+00f,+9.26117462e-01f,}; 
k2c_tensor test2_input_1_18_input = {&test2_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test2_array[4] = {
+2.72441115e-02f,-5.28059244e-01f,-8.18446204e-02f,+1.30488023e-01f,}; 
k2c_tensor keras_dense_3_18_test2 = {&keras_dense_3_18_test2_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test2_array[4] = {0}; 
k2c_tensor c_dense_3_18_test2 = {&c_dense_3_18_test2_array[0],1,4,{4,1,1,1,1}}; 
float test3_input_1_18_input_array[14] = {
-1.48686749e+00f,+2.78127432e-01f,-1.02925211e+00f,+1.74271349e+00f,-4.73375902e-01f,
-4.65171308e-01f,-1.57316983e+00f,-6.85861266e-01f,-1.88812181e+00f,-1.91514628e+00f,
-4.35727033e-01f,-1.41314698e+00f,-6.21326179e-01f,-3.16206184e-01f,}; 
k2c_tensor test3_input_1_18_input = {&test3_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test3_array[4] = {
+6.38214126e-02f,-3.02153975e-01f,-2.38348439e-01f,-1.36716142e-01f,}; 
k2c_tensor keras_dense_3_18_test3 = {&keras_dense_3_18_test3_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test3_array[4] = {0}; 
k2c_tensor c_dense_3_18_test3 = {&c_dense_3_18_test3_array[0],1,4,{4,1,1,1,1}}; 
float test4_input_1_18_input_array[14] = {
+1.55874628e+00f,-9.15592417e-01f,-9.52508641e-01f,-1.30419997e+00f,-3.09984551e-01f,
+3.72223572e-01f,+5.23159494e-01f,-9.16003030e-03f,-2.64973335e-01f,-3.69952709e-01f,
+1.16388238e+00f,+1.57496489e+00f,-8.73770677e-01f,+1.18409243e+00f,}; 
k2c_tensor test4_input_1_18_input = {&test4_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test4_array[4] = {
-4.43411395e-02f,-2.86589622e-01f,-2.03758821e-01f,+1.15498334e-01f,}; 
k2c_tensor keras_dense_3_18_test4 = {&keras_dense_3_18_test4_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test4_array[4] = {0}; 
k2c_tensor c_dense_3_18_test4 = {&c_dense_3_18_test4_array[0],1,4,{4,1,1,1,1}}; 
float test5_input_1_18_input_array[14] = {
-1.37496194e+00f,+7.94753924e-01f,-1.45305327e+00f,+3.17414838e-01f,-4.56781234e-01f,
+3.69822557e-02f,-1.08508008e+00f,-1.35526811e-01f,-1.07815673e+00f,-1.78138015e+00f,
-1.66897447e+00f,+1.47348786e+00f,-1.35972225e+00f,+1.59107637e+00f,}; 
k2c_tensor test5_input_1_18_input = {&test5_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test5_array[4] = {
+3.30654472e-01f,-3.34821999e-01f,-2.60924965e-01f,+4.48196828e-01f,}; 
k2c_tensor keras_dense_3_18_test5 = {&keras_dense_3_18_test5_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test5_array[4] = {0}; 
k2c_tensor c_dense_3_18_test5 = {&c_dense_3_18_test5_array[0],1,4,{4,1,1,1,1}}; 
float test6_input_1_18_input_array[14] = {
+1.74829528e+00f,+9.41141792e-01f,+1.84410276e+00f,+2.88089364e-01f,-3.80792048e-01f,
+3.77659515e-01f,+1.76471345e+00f,-1.39822232e+00f,+1.26687622e+00f,+8.35784385e-01f,
+1.92122450e+00f,-1.79303229e+00f,+1.69204816e-01f,-1.98847212e+00f,}; 
k2c_tensor test6_input_1_18_input = {&test6_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test6_array[4] = {
+1.07034914e-01f,-4.12705183e-01f,-1.91705599e-01f,-1.06335320e-01f,}; 
k2c_tensor keras_dense_3_18_test6 = {&keras_dense_3_18_test6_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test6_array[4] = {0}; 
k2c_tensor c_dense_3_18_test6 = {&c_dense_3_18_test6_array[0],1,4,{4,1,1,1,1}}; 
float test7_input_1_18_input_array[14] = {
-1.52341183e+00f,+1.85438944e+00f,-1.98940127e+00f,-1.04520534e+00f,+1.21199375e+00f,
-1.94677189e+00f,-1.92919691e+00f,-1.84377435e+00f,+1.26390849e+00f,+8.89051224e-01f,
-3.98007450e-01f,+4.01006280e-01f,+1.38369371e+00f,+6.27908981e-01f,}; 
k2c_tensor test7_input_1_18_input = {&test7_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test7_array[4] = {
+2.92452097e-01f,-4.48496461e-01f,-3.98431510e-01f,+2.74683654e-01f,}; 
k2c_tensor keras_dense_3_18_test7 = {&keras_dense_3_18_test7_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test7_array[4] = {0}; 
k2c_tensor c_dense_3_18_test7 = {&c_dense_3_18_test7_array[0],1,4,{4,1,1,1,1}}; 
float test8_input_1_18_input_array[14] = {
+1.08796741e+00f,+1.11455039e+00f,-9.25727981e-01f,+1.67609480e+00f,+1.62715188e+00f,
-1.42458921e+00f,-5.15974739e-01f,-4.06022022e-01f,+8.68183209e-01f,-1.62960307e-01f,
+8.61578796e-01f,+8.45110848e-01f,+8.73797061e-01f,+2.44060921e-01f,}; 
k2c_tensor test8_input_1_18_input = {&test8_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test8_array[4] = {
-1.86938196e-01f,-3.18094462e-01f,-1.48859784e-01f,-6.97242096e-02f,}; 
k2c_tensor keras_dense_3_18_test8 = {&keras_dense_3_18_test8_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test8_array[4] = {0}; 
k2c_tensor c_dense_3_18_test8 = {&c_dense_3_18_test8_array[0],1,4,{4,1,1,1,1}}; 
float test9_input_1_18_input_array[14] = {
-1.13137685e+00f,+8.05351960e-01f,+1.64134219e+00f,-1.77546408e+00f,+1.13103684e+00f,
+9.60089342e-01f,+1.03742218e+00f,-1.50629130e+00f,+1.54393771e+00f,+9.92605184e-01f,
+1.33974461e+00f,-3.40560705e-02f,+3.41303641e-01f,+4.85258646e-01f,}; 
k2c_tensor test9_input_1_18_input = {&test9_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test9_array[4] = {
-3.22334021e-02f,-2.69306302e-01f,-1.64046556e-01f,+6.57685054e-03f,}; 
k2c_tensor keras_dense_3_18_test9 = {&keras_dense_3_18_test9_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test9_array[4] = {0}; 
k2c_tensor c_dense_3_18_test9 = {&c_dense_3_18_test9_array[0],1,4,{4,1,1,1,1}}; 
float test10_input_1_18_input_array[14] = {
+1.59671815e+00f,-7.65442602e-01f,-1.09524743e+00f,-4.03323875e-02f,+1.24041664e+00f,
+5.79214818e-01f,+4.82572171e-01f,-1.59275133e-01f,+4.80871890e-01f,-8.73196383e-01f,
-1.29450512e+00f,-6.74965386e-01f,-1.31199714e+00f,-1.67465395e+00f,}; 
k2c_tensor test10_input_1_18_input = {&test10_input_1_18_input_array[0],1,14,{14, 1, 1, 1, 1}}; 
float keras_dense_3_18_test10_array[4] = {
-3.45252976e-02f,-2.37432718e-01f,-1.48671120e-01f,+7.23912194e-02f,}; 
k2c_tensor keras_dense_3_18_test10 = {&keras_dense_3_18_test10_array[0],1,4,{4,1,1,1,1}}; 
float c_dense_3_18_test10_array[4] = {0}; 
k2c_tensor c_dense_3_18_test10 = {&c_dense_3_18_test10_array[0],1,4,{4,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
torbeam_EC2_xmode_initialize(); 
clock_t t0 = clock(); 
torbeam_EC2_xmode(&test1_input_1_18_input,&c_dense_3_18_test1); 
torbeam_EC2_xmode(&test2_input_1_18_input,&c_dense_3_18_test2); 
torbeam_EC2_xmode(&test3_input_1_18_input,&c_dense_3_18_test3); 
torbeam_EC2_xmode(&test4_input_1_18_input,&c_dense_3_18_test4); 
torbeam_EC2_xmode(&test5_input_1_18_input,&c_dense_3_18_test5); 
torbeam_EC2_xmode(&test6_input_1_18_input,&c_dense_3_18_test6); 
torbeam_EC2_xmode(&test7_input_1_18_input,&c_dense_3_18_test7); 
torbeam_EC2_xmode(&test8_input_1_18_input,&c_dense_3_18_test8); 
torbeam_EC2_xmode(&test9_input_1_18_input,&c_dense_3_18_test9); 
torbeam_EC2_xmode(&test10_input_1_18_input,&c_dense_3_18_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_3_18_test1,&c_dense_3_18_test1); 
errors[1] = maxabs(&keras_dense_3_18_test2,&c_dense_3_18_test2); 
errors[2] = maxabs(&keras_dense_3_18_test3,&c_dense_3_18_test3); 
errors[3] = maxabs(&keras_dense_3_18_test4,&c_dense_3_18_test4); 
errors[4] = maxabs(&keras_dense_3_18_test5,&c_dense_3_18_test5); 
errors[5] = maxabs(&keras_dense_3_18_test6,&c_dense_3_18_test6); 
errors[6] = maxabs(&keras_dense_3_18_test7,&c_dense_3_18_test7); 
errors[7] = maxabs(&keras_dense_3_18_test8,&c_dense_3_18_test8); 
errors[8] = maxabs(&keras_dense_3_18_test9,&c_dense_3_18_test9); 
errors[9] = maxabs(&keras_dense_3_18_test10,&c_dense_3_18_test10); 
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

