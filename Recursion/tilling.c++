#include <iostream>
using namespace std;
 int tilling(int n ){
    if (n==1 || n==0){
        return 1;
    }                   // to solve the no of ways 
    return tilling(n-1)+tilling(n-2) ;
 }
 int main (){
    int n = 4;
    cout << tilling(5)<< endl;
    return 0;
 }