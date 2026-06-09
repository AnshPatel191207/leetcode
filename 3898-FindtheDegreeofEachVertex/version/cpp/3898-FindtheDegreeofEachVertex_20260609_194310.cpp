// Last updated: 09/06/2026, 19:43:10
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        vector<int> ans(n, 0);
6        
7        for (int i = 0; i < n; i++) {
8            int current_degree = 0;
9            for (int j = 0; j < n; j++) {
10                if (matrix[i][j] == 1) {
11                    current_degree++;
12                }
13            }
14            ans[i] = current_degree;
15        }
16        return ans;
17    }
18};