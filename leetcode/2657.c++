// Q: 2657
#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result ;
        int n = A.size();
        
        for (int i=0; i<n; i++){ // main loop
        int count =0; 
            for(int j=0; j<=i; j++){ // for A
                for (int k=0; k<=i; k++){ // for B
                        if(B[k]==A[j]){
                            count++;
                        }
                }
            }
            result.push_back(count);
        }
      return result;
    }
};
int main(){
    Solution s;
    std::vector<int> A = {2,3,1};
    std::vector<int> B = {3,1,2};
    std::vector<int> result = s.findThePrefixCommonArray(A, B);
    for (int i : result){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}