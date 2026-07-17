// Last updated: 17/07/2026, 09:54:03
1class Solution {
2public:
3    bool isHappy(int n) {
4        while (n > 9) {
5            int totalSum = 0;
6            while (n > 0) {
7                int digit = n % 10;
8                totalSum += digit * digit;
9                n /= 10;
10            }
11            n = totalSum;
12        }
13        return n == 1 || n == 7;
14    }
15};