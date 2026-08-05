// Last updated: 05/08/2026, 11:10:53
class Solution {
public:
    int mirrorDistance(int n) {
        long long reversedN = 0;
        int originalN = n;
        
        while (n > 0) {
            int lastDigit = n % 10;
            reversedN = (reversedN * 10) + lastDigit;
            n /= 10;
        }
        
        long long difference = originalN - reversedN;
        if (difference < 0) {
            difference = -difference;
        }
        
        return difference;
    }
};