// Last updated: 15/07/2026, 20:00:50
1class Solution {
2public:
3    int countTriples(int n) {
4        int count = 0;
5        
6        for (int a = 1; a <= n; a++) {
7            
8            for (int b = 1; b <= n; b++) {
9
10                int c_square = (a * a) + (b * b);
11                int c = sqrt(c_square);
12                
13                if (c <= n && c * c == c_square) {
14                    count++;
15                }
16            }
17        }
18        
19        return count;
20    }
21};