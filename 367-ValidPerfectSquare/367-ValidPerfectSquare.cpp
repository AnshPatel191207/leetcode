// Last updated: 05/08/2026, 11:19:49
// Using Newton's algorithm to compute integer square root: r_n+1 = 1/2 (r_n + num/r_n)

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long r = num; // r = root
        
        while (r * r > num) {
            r = (r + num / r) / 2;
        }
        
        return r * r == num;
    }
};