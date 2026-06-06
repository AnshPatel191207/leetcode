// Last updated: 06/06/2026, 19:46:24
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n>0){
            int digit = n%10;
            product *= digit;
            sum += digit;
            n /= 10;
        }
        return product - sum;
    }
};