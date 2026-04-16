// Q: 3488 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> result;

        for(int qi : queries) { 
            int element = nums[qi];
            vector<int>& vec = mp[element];

            int sz = vec.size();

           
            if(sz == 1) {
                result.push_back(-1);
                continue;
            }

            int pos = lower_bound(begin(vec), end(vec), qi) - begin(vec); 
            int res = INT_MAX;

         
            int right = vec[(pos+1) % sz];
            int d = abs(qi - right);
            int circularDist = n-d;
            res = min({res, d, circularDist});


         
            int left = vec[(pos-1+sz) % sz];
            d = abs(qi - left);
            circularDist = n-d;
            res = min({res, d, circularDist});

            result.push_back(res);
        }

        return result;
    }
};
int main (){
    Solution s;
    vector<int> nums = {1,2,3,2,1};
    vector<int> queries = {0,1,2,3,4};
    vector<int> result = s.solveQueries(nums, queries);
    for(int &res : result){
        cout << res << " ";
    }
    cout << endl;
}