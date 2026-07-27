// Q: 1464
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int Max = 0;
        for (int i = 0; i<n ; i++){
            for (int j = i+1; j <n ; j++){
                Max =  max(Max, (nums[i]-1) * (nums[j]-1) );
            }
        }

        return Max;
        
    }
};