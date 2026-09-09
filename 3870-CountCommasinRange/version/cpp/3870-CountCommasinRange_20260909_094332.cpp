// Last updated: 09/09/2026, 09:43:32
1class Solution {
2public:
3    int countCommas(int n) {
4        if (n < 1000) {
5            return 0;
6        }
7        return n - 999;
8    }
9};