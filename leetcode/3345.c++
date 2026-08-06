// Q:3345
#include <iostream>
using namespace std;
class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true){
            int mul = 1;
            int M = n;

            while ( M>0){
             int digit = M % 10;
            mul *= digit;
            M/= 10;

            }   

        if ( mul % t ==0){
            return n ;
        }
        else {
        n++;
        }
    }
      
}

      
 
    
};