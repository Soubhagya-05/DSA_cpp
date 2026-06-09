// Q 3689
#include <iostream>
#include <vector>
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxEle = INT_MIN;
        int minEle = INT_MAX;
        for (int num : nums){
            maxEle = max(maxEle, num);
            minEle = min(minEle, num);
        }
        return  1L * (maxEle - minEle) * k ;
    }
};