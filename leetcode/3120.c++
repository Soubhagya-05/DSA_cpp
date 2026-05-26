// Q: 3120
#include <iostream>
#include <vector>
class Solution {
public:
    int numberOfSpecialChars(string word) {
      int n = word.length();
      unordered_set<char> lower;
      unordered_set<char> upper;
     
      int count = 0;
    for (int i =0 ; i< n; i++){
        if(islower(word[i])){
            lower.insert(word[i]);
        }else{
            upper.insert(word[i]);
        }
    }

    for (char ch : lower ){
        if(upper.count(toupper(ch))){
            count ++;
        }
    }
    return count ;

        }
        
    
};