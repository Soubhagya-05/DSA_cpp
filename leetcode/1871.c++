// Q:1871
#include <iostream>
#include <vector>
class Solution {                    // Thss approach  passed all the testcases but memory limit is exceeded 
public:
int n ;
bool solve (int idx, string &s, int minJump, int maxJump,vector<int> t ){
    if (idx == n-1){
        return true;
    }
        if (t[idx] != -1){
            return t[idx];
        }
        for (int jump = minJump; jump <= maxJump; jump++){
            int j = idx + jump;
            if (j >= n){
                break;
            }                                                   
            if(s[j] == '0'){
                if(solve(j, s, minJump, maxJump, t)){
                    return t[idx] = true;
                }
                
            }
        }
    
    return t[idx] = false;
}
    bool canReach(string s, int minJump, int maxJump) {
         n = s.length();
        vector<int> t(n, -1) ;

         return solve(0, s, minJump, maxJump, t);
        
    }
};

// This the correct approacH Made with the help of chatGpt

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {

        int n = s.size();

        queue<int> q;
        q.push(0);

        vector<bool> visited(n, false);
        visited[0] = true;

        int farthest = 0;

        while (!q.empty()) {

            int idx = q.front();
            q.pop();

            if (idx == n - 1) {
                return true;
            }

            int start = max(idx + minJump, farthest + 1);
            int end = min(idx + maxJump, n - 1);

            for (int j = start; j <= end; j++) {

                if (s[j] == '0' && !visited[j]) {
                    visited[j] = true;
                    q.push(j);
                }
            }

            farthest = end;
        }

        return false;
    }
};