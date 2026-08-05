// Last updated: 05/08/2026, 11:20:34
class Solution {
public:
    bool isHappy(int n) {
        while (n > 9) {
            int totalSum = 0;
            while (n > 0) {
                int digit = n % 10;
                totalSum += digit * digit;
                n /= 10;
            }
            n = totalSum;
        }
        return n == 1 || n == 7;
    }
};