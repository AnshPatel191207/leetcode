// Last updated: 25/08/2026, 16:06:20
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        int n = mat.size();
5        int m = mat[0].size();
6        map<int, vector<int>> mp;
7
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < m; j++) {
10                mp[i + j].push_back(mat[i][j]);
11            }
12        }
13
14        vector<int> ans;
15        for (auto it : mp) {
16            int d = it.first;
17            vector<int> value = it.second;
18
19            if (d % 2 == 0) {
20                reverse(value.begin(), value.end());
21            }
22            for (int x : value) {
23                ans.push_back(x);
24            }
25        }
26        
27        return ans;
28    }
29};