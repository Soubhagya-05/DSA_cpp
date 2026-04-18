// Q: 3783 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int getReverse(int n) {
        int result = 0;

        while (n) {
            int rem = n%10;
            result  = (result * 10) + rem;
            n      /= 10;
        }

        return result;
    }

    int mirrorDistance(int n) {
        return abs(n - getReverse(n));
    }
};



int main (){
    Solution s;
    int n = 123;
    cout << s.mirrorDistance(n) << endl; // Output: 198
    return 0;
}