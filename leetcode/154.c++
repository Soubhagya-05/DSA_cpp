// Q: 154 
#include <iostream>
#include <vector>
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l =0;
        int r = nums.size()-1;
        while (l <r){
            int mid = l +(r-l)/2;
            if (nums[mid] < nums[r]){
                r = mid;
            }else if(nums[mid] > nums[r]){
                l = mid + 1;
            }else {
                r-- ;
            }
        }
        return nums[l];
    }
};
int main(){
    Solution s;
    std::vector<int> nums = {3,4,5,1,2};
    std::cout << s.findMin(nums) << std::endl;
    return 0;
}