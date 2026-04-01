// Q:2751. Sum of Values at Indices With K Set Bits
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {

        int n = positions.size();
        vector<int> actual_index(n);

        for (int i =0; i<n; i++){
           actual_index[i] = i; 
        }

        auto lambda  = [&](int &i, int &j){
            if (positions[i] < positions[j]){
                return true; 
            }else{
                return false;
            }
        };

    sort(begin(actual_index), end(actual_index), lambda);

    vector<int> result;
    stack<int> st;
    for (int currentIdx : actual_index ){
        if(directions[currentIdx] == 'R'){
            st.push(currentIdx);
        }else{
            while(!st.empty() && healths[currentIdx] > 0 ){
                int top_Idx = st.top();
                st.pop();

                if(healths[top_Idx] > healths[currentIdx]){
                    healths[top_Idx] -= 1;
                    healths[currentIdx] = 0;
                    st.push(top_Idx);
                }else if
                    (healths[top_Idx] < healths[currentIdx]){
                       healths[currentIdx] -= 1;
                        healths[top_Idx] = 0;
                    }else{
                       healths[top_Idx] = 0;
                       healths[currentIdx] = 0;
                    }
                }
            }
        }

        for(int i =0; i< n; i++){
            if(healths[i] > 0){
             result.push_back(healths[i]);
            }
        }


    return result; 

    }
};
int main(){
    Solution s;
    vector<int> positions = {5,4,3,2,1};
    vector<int> healths = {1,1,1,1,1};
    string directions = "RRRRR";
    vector<int> result = s.survivedRobotsHealths(positions, healths, directions);
    for (int i : result){
        cout << i << " ";
    }
}