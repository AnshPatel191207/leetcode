// Last updated: 06/06/2026, 19:45:46
class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int product = 1;
        while (temp > 0) {
            sum += temp % 10;
            product *= temp % 10;
            temp /= 10;
        }
        return n % (sum + product) == 0;
    }
};