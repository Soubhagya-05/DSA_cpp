// Q: 3754
class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
      long long sum = 0;
        int p = 1;
        while (n > 0){
            int digit = n %10;
            sum += digit;
            if (digit != 0){
                x += digit * p;
                p *= 10;
            }
            n /= 10;
        }
        return x * sum ;
    }
};