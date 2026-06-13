// Last updated: 13/06/2026, 23:35:08
1class Solution {
2public:
3    int fib(int n) {
4        
5        if (n == 0) return 0;
6        if (n == 1) return 1;
7        
8        return fib(n - 1) + fib(n - 2);
9    }
10};