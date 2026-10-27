// Q: 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int Max =  0 ;
        int min = prices[0];

        for (int i = 1 ; i < n ; i ++){
            if ( prices[i] < min){
                min = prices[i];
            } else {
                    int diff = (prices[i] -  min);
                    Max = max(Max, diff);
                }
            }
            return Max;
        }
        
    };