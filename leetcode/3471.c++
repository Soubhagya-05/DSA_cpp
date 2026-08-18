// Q: 3472
#include <iostream>
using namespace std;
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;

        // k == 1
        if (k == 1) {
            for (int x : nums) {
                freq[x]++;
            }

            int ans1 = -1;

            for (int x : nums) {
                if (freq[x] == 1) {
                    ans1 = max(ans1, x);
                }
            }

            return ans1;
        }

        // k == n
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        // 1 < k < n
        for (int x : nums) {
            freq[x]++;
        }

        int maxele = -1;

        if (freq[nums[0]] == 1) {
            maxele = max(maxele, nums[0]);
        }

        if (freq[nums[n - 1]] == 1) {
            maxele = max(maxele, nums[n - 1]);
        }

        return maxele;
    }
};