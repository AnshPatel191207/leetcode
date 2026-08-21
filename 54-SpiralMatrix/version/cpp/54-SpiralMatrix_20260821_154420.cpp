// Last updated: 21/08/2026, 15:44:20
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> ans;
5
6        int top = 0;
7        int bottom = matrix.size() - 1;
8        int left = 0;
9        int right = matrix[0].size() - 1;
10
11        while (top <= bottom && left <= right) {
12
13            for (int j = left; j <= right; j++) {
14                ans.push_back(matrix[top][j]);
15            }
16            top++;
17
18            for (int i = top; i <= bottom; i++) {
19                ans.push_back(matrix[i][right]);
20            }
21            right--;
22
23            if (top <= bottom) {
24                for (int j = right; j >= left; j--)
25                    ans.push_back(matrix[bottom][j]);
26                bottom--;
27            }
28            if (left <= right) {
29                for (int i = bottom; i >= top; i--)
30                    ans.push_back(matrix[i][left]);
31                left++;
32            }
33        }
34        return ans;
35    }
36};