// Q: 33
#include <iostream>
#include <vector>
class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int left = 0;
        int right = nums.size() -1;

        while (left <= right){
            int mid = left + (right - left)/2;
            //Base case
            if (nums[mid] == target){
                return mid;
            };

            // for left sorted
            if (nums[left] <= nums[mid]){
                if (nums[left] <= target && nums[mid] > target){
                    right = mid -1;

                }else {
                    left = mid +1;
                }
            }
            //  for right sorted 
            else {

                if(target > nums[mid] && target <= nums[right]){
                    left = mid + 1;
                }else {
                    right =  mid-1; 
                }
            }
        }
        return -1;
        
    }
};
int main(){
    Solution s;
    std::vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = s.search(nums, target);
    std::cout << result << std::endl; // Output: 4
    return 0;
}