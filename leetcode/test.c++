#include <iostream>
#include <vector>
using namespace std;
int main(){
     int  a [] = { 1,2,3,4,5};
     int n = sizeof(a)/sizeof(a[0]);
     int key = 4;
     int start = 0;
     int end = n -1;
     while ( start <= end){
        int mid = start + (end - start)/2;
        if (a[mid] == key ){
          cout << mid;
          return 0;
        }else if ( a[mid]< key ){
            start = mid +1;
        }
            else {
                end = mid -1;
            }
        }
     }
    
