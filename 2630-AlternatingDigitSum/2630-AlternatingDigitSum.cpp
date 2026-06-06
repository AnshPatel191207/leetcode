// Last updated: 06/06/2026, 19:45:54
class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = 1;
        while(n>0){
            sum = sum + n%10 * sign;
            sign = -sign;
            n=n/10;
        }
        if(sign==1){
            return -sum;
        }
        return sum;
    }
};