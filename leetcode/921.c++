// Q:921
class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int o = 0;
        int c = 0;
        
        for (int i = 0 ; i < n; i++){
            if (s[i] == '('){
                o++;
            }else {
                if ( o > 0){
                    o--;
                }else {
                    c++;
                }
                
            }
        }
        
        return o + c ;
        
    }
};