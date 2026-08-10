// Q: 11
#include <iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int Max = 0;
        int l = 0, r = n-1;

        while (l < r){
            int w = r - l;
            int h = min(height[l], height[r]);
            int area = h * w ;

            Max = max(Max, area);
            if (height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return Max;
        
    }
};