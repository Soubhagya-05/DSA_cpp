#include <iostream>
using namespace std;
int pow(int x, int n){ 
  if (n == 0){
  return 1;
}
int half_pow = pow( x, n/2); // half the n 
int half_pow_square = half_pow * half_pow ; // square the half of n 

if (n%2 != 0){
  return x * half_pow_square;
}
return half_pow_square;
}
int main (){
cout<< pow(2,4)<< endl;
}