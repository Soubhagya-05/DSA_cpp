
 // Q:1727. Largest Submatrix With Rearrangements
 
#include <iostream>
using namespace std;
class Solution{
    public:
    int largestSubmatrix(vector<vector<int>>&matrix){
        int m = matrix.size(); // row size
        int n = matrix[0].size(); // coloumn size
        int maxArea = 0; 
        for (int row =0; row < m; row++){
            for (int col =0; col<n ; col++){ //consecutive 1's in each column
                if (matrix[row][col] == 1 && row > 0){
                    matrix[row][col] += matrix[row -1][col];
                }
            }
        }
        for (int row =0; row < m; row++){
            vector<int> heights(matrix[row].begin(), matrix[row].end());
            sort(heights.begin(), heights.end(), greater<int>()); // sort in decending order
            for (int col =0; col < n; col++){
                int area = heights[col] * (col + 1);
                maxArea = max(maxArea, area);
            }
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix = {{0,0,1},{1,1,1},{1,0,1}};
    cout << s.largestSubmatrix(matrix) << endl;
}