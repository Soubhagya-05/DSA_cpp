// Q: 3300 
#include <iostream>
#include <vector>
class Solution {
public:
    int minElement(vector<int>& nums) {
    int ans = INT_MAX;
    for (int num : nums){
        int sum =0;
        while (num >0){
            
             int digit = num%10;
             sum += digit;
             num/=10;
        }
        ans = min(ans, sum);
       
        
    }
    return ans;

    }
};