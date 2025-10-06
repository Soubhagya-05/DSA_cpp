#include <iostream>
using namespace std;
int fibonacci(int n){
  if (n==0 || n==1){  // return  1 or 0
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2); // add previous two numbers 
}
int main (){
  int n = 7;
  cout << fibonacci(n);
}