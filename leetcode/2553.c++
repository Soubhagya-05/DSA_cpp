// Q:2553 
#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans ;
        for (int num : nums ){            // To iterrate  throughout the nums.length 
            vector<int> ref ;
            while (num > 0){
            ref.push_back(num%10);             // Here the digits are store in ref 
            num/= 10;
            }
            reverse(ref.begin(), ref.end());             // Here the digits are store in reverse order
            for (int digit : ref){
            ans.push_back(digit);
            }
        }
      return ans ;
    }
};
