//Q: 1886. Determine Whether Matrix Can Be Obtained By Rotation
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
int m;
 void Rotation(vector<vector<int>>& mat) {
    for (int i =0; i<m; i++){
        for (int j=i; j<m ; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i =0; i< m; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
    }
        
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
         m = mat.size();
        for (int c =0; c<4 ; c++){
            int equal = true;

            for (int i =0; i<m; i++){
                for (int j =0; j<m;j++){
                    if(mat[i][j] != target[i][j]){
                        equal = false;
                        break;
                    }
                }
            if(!equal)
                    break;
                
        }
             
             if(equal)
             return true;
             Rotation(mat);
             

        }
       
        
     return false;
    }
};
int main(){
    Solution s;
    vector<vector<int>> mat = {{0,1},{1,0}};
    vector<vector<int>> target = {{1,0},{0,1}};
    cout<<s.findRotation(mat, target);
}