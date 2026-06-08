// Q:2161
#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countLess = 0;
        int countEqual = 0;
        for (int num :  nums){
            if (num < pivot){
                countLess++;
            }else if ( num == pivot){
                countEqual++;
            }
        }
        vector<int> result(nums.size());
        int i = 0;
        int j = countLess ;
        int k = countLess + countEqual ;

        for (int num : nums){
            if (num < pivot){
                result[i] = num ;
                i++ ;
            }else if ( num == pivot){
                result[j] = num ;
                j++;
            }else {
                result[k] = num;
                k++ ;
            }
        }
        return result;

        
    }
};