// Last updated: 25/07/2026, 11:11:36
1class Solution {
2public:
3    int maxProduct(int n) {
4        int max1 = 0;
5        int max2 = 0;
6        while (n > 0) {
7            int digit = n % 10;
8            n /= 10;
9            if (digit >= max1) {
10                max2 = max1;
11                max1 = digit;
12            } else if (digit > max2) {
13                max2 = digit;
14            }
15        }
16        return max1 * max2;
17    }
18};