//Q" 2091
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n = nums.size();
         int minid = 0;
         int maxid = 0;
         for (int i =0; i<n ; i++){
            if (nums[i] < nums[minid]){
                minid = i;
            }
            if (nums[i] > nums[maxid]){
                maxid = i;
            }
         }
         if (minid > maxid){
            swap(minid, maxid);
         }
         int left = maxid +1;
         int right = n - minid;
         int both = (minid +1) + (n - maxid);

        return min({left, right, both});
        
    }
};