// Q:657.Robot Return to Origin
#include  <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for (int i =0; i < moves.size(); i++){
            char &ch = moves[i];
            if(ch == 'U'){
                y++;
            } else if(ch == 'D'){
                y--;
            }else if (ch == 'L'){
                x--;
            }else{
                x++;
            }
        }
    if (x == 0 && y == 0){
        return true;
    }else {
        return false;
    }

        
    }
};
int main(){
    Solution s;
    string moves = "UD";
    cout<<s.judgeCircle(moves);
}