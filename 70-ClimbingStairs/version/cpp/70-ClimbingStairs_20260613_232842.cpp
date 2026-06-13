// Last updated: 13/06/2026, 23:28:42
1class Solution {
2public:
3    int climbStairs(int n) {
4        
5        if (n == 1) return 1;
6        if (n == 2) return 2;
7        
8        int prev2 = 1;
9        int prev1 = 2;
10        int current = 0;
11        
12        for (int i = 3; i <= n; i++) {
13            current = prev1 + prev2;
14            prev2 = prev1;
15            prev1 = current;
16        }
17        return current;
18    }
19};