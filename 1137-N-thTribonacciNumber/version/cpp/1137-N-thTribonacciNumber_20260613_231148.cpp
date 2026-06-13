// Last updated: 13/06/2026, 23:11:48
1class Solution {
2public:
3    int tribonacci(int n) {
4        
5        if (n == 0) return 0;
6        if (n == 1 || n == 2) return 1;
7        
8        int t0 = 0, t1 = 1, t2 = 1;
9        int next_t = 0;
10        
11        for (int i = 3; i <= n; i++) {
12            next_t = t0 + t1 + t2;
13            
14            t0 = t1;
15            t1 = t2;
16            t2 = next_t;
17        }
18        
19        return t2;
20    }
21};