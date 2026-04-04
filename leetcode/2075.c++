//Q: 2075. Decode the Slanted Ciphertext
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int l = encodedText.length();
        int coloums = l / rows ;
        string originalText;
        for (int i =0; i< coloums ; i ++ ){
            for (int j = i; j< l ; j+=( coloums +1)){
                originalText +=  encodedText[j];
            }
        }
        while(!originalText.empty() && originalText.back() == ' '){
            originalText.pop_back();
        }
        return originalText ;
    }
};

int main(){
    Solution s;
    string encodedText = "ch   ie   pr";
    int rows = 3;
    cout<<s.decodeCiphertext(encodedText, rows);
}