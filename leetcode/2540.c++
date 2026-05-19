// Q: 2540 
#include <iostream>
#include <vector>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i =0 , j =0;

        while (  i < nums1.size() &&  j < nums2.size()){
            if(nums1[i] == nums2[j]){
                return nums1[i];
            }else if (nums1[i] > nums2[j]){
                j++;
            }else {
                i++;
            }
        }

 
        return -1;
    }
};
int main(){
    Solution s;
    std::vector<int> nums1 = {1,2,3};
    std::vector<int> nums2 = {2,4};
    std::cout << s.getCommon(nums1, nums2) << std::endl;
    return 0;
}