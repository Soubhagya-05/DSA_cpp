// Q: 3751
#include <iostream>
#include <vector>
class Solution {
public:
   int  findwaviness(int num){
    int Score =0;
    string s = to_string(num);
    int l = s.length();
    if (l < 3){
        return 0;
    }
    for (int i =1; i < l-1; i++ ){
        if (s[i] > s[i-1] && s[i] > s[i+1]){  // peak
            Score ++ ;
        }
        if (s[i] < s[i-1] && s[i] < s[i+1]){  // valley
            Score ++ ;
        }
    }
    return Score ;
   }

    int totalWaviness(int num1, int num2) {
        int Score =0;
        for ( int num = num1; num <= num2; num++){
            Score += findwaviness(num);
        }
        return Score ;
    }
};