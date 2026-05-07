// Q: 3660 
#include <iostream>
<include <vector>
using namepsace std;
class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> MaxLeft(n);
        vector<int> MinRight(n);
        MaxLeft[0] = nums[0];
        MinRight[n-1] = nums[n-1];

        for (int i =1; i< n; i++){
            MaxLeft[i] = max(nums[i], MaxLeft[i-1]); 
        }
        for (int i = n-2; i >=0; i--){
            MinRight[i] = min(nums[i], MinRight[i+1]);
        }

        vector<int> ans(n);
        ans[n-1] = MaxLeft[n-1];
        
        for (int i = n-2; i>=0; i--){
            if(MaxLeft[i] <= MinRight[i+1]){
                ans[i] = MaxLeft[i];
            }else{
                ans[i] =ans[i+1];
            }
        }
        return ans ;
    }
};