// Last updated: 17/06/2026, 10:35:59
1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int count = 0;
5        int m = grid.size();
6        int n = grid[0].size();
7        
8        for (int i = 0; i < m; i++) {
9            for (int j = 0; j < n; j++) {
10                if (grid[i][j] < 0) {
11                    count++;
12                }
13            }
14        }
15        
16        return count;
17    }
18};