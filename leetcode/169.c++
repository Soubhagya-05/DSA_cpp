// Q: 169
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        int ans = 0;
        for (int i = 0; i < n; i ++){
            int count = 1;
            for ( int j = i +1; j < n ; j ++){
                if (nums[i] == nums[j]){
                    count ++;
                }
                
                    
                }
                if (count > m ){
                    ans = nums[i] ; 
                    return ans;

                }
            }
             return ans ;
           
        }
        
        
    };
