// Q: 3903
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        for (int i = 0; i < nums.size(); i++) {

           
            int Max = nums[0];

            for (int j = 0; j <= i; j++) {
                Max = max(Max, nums[j]);
            }

   
            int Min = nums[i];

            for (int j = i; j < nums.size(); j++) {
                Min = min(Min, nums[j]);
            }

            if (Max - Min <= k) {
                return i;
            }
        }

        return -1;
    }
};