// Q: 1189 
#include <iostream>
#include <vector>
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a = 0 , b = 0, l = 0, o= 0, n =0 ;

        for (int i = 0; i< text.length() ; i++){
             if ( text[i] == 'b') b++;
             else if(text[i] == 'a') a++ ;
             else if (text[i] == 'l') l++ ;
             else if (text[i] == 'o') o++ ;
             else if (text[i] == 'n') n++;

        }

        return min ({a, b, l/2 , o/2 , n});
        
    }
};
