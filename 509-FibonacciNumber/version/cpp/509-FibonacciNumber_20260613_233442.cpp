// Last updated: 13/06/2026, 23:34:42
1class Solution {
2public:
3    int fib(int n) {
4        
5        if (n == 0) return 0;
6        if (n == 1) return 1;
7        
8        int prev2 = 0;
9        int prev1 = 1;
10        int current = 0;
11        
12        for (int i = 2; i <= n; i++) {
13            current = prev1 + prev2;
14            prev2 = prev1;
15            prev1 = current;
16        }
17        
18        return current;
19    }
20};