// Q:3070. Count Submatrices With Sum Less Than K

#include <iostream>
using namespace std;
class Solution{
    public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int count = 0;
        int M = grid.size();
        int N = grid[0].size();
        for(int i =0; i<M; i++){
            for (int j =0; j< N; j++){
                if(i-1 >= 0) 
                grid[i][j] += grid[i-1][j];
                if(j-1 >= 0)
                grid[i][j] += grid[i][j-1];
                if(i-1 >= 0 && j-1 >= 0)
                grid[i][j] -= grid[i-1][j-1];
            if (grid[i][j] <= k ){
                count++;
            }else{
                break;
            }
         }
     }
        return count;
    }
};
int main(){
    Solution s;
    vector<vector<int>> grid = {{1,1,1},{1,0,1},{1,1,1}};
    int k = 4;
    cout << s.countSubmatrices(grid, k) << endl;
}