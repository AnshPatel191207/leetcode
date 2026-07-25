// Last updated: 25/07/2026, 10:29:25
1// Using Newton's algorithm to compute integer square root: r_n+1 = 1/2 (r_n + num/r_n)
2
3class Solution {
4public:
5    bool isPerfectSquare(int num) {
6        long long r = num; // r = root
7        
8        while (r * r > num) {
9            r = (r + num / r) / 2;
10        }
11        
12        return r * r == num;
13    }
14};