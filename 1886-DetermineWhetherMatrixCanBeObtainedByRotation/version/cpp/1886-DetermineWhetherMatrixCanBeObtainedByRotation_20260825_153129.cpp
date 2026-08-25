// Last updated: 25/08/2026, 15:31:29
1class Solution {
2public:
3    void rotate90(vector<vector<int>>& mat) {
4        int n = mat.size();
5
6        for (int i = 0; i < n; i++) {
7            for (int j = i + 1; j < n; j++) {
8                swap(mat[i][j], mat[j][i]);
9            }
10        }
11
12        for (int i = 0; i < n; i++) {
13            reverse(mat[i].begin(), mat[i].end());
14        }
15    }
16
17    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
18        for (int k = 0; k < 4; k++) {
19            if (mat == target) return true;
20            rotate90(mat);
21        }
22        return false;
23    }
24};