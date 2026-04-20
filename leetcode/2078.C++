// Q: 2078
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int result = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (colors[i] != colors[j]) {
                    result = max(result, j - i);
                }
            }
        }
        return result;
    }
};
int main (){
    Solution s;
    vector<int> colors = {1, 1, 1, 6, 1, 1, 1};
    cout << s.maxDistance(colors) << endl; // Output: 3
    return 0;
}