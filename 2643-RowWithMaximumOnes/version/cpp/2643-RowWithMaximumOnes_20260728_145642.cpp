// Last updated: 28/07/2026, 14:56:42
1class Solution {
2public:
3    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
4        int maxRow = 0;
5        int maxCount = -1;
6        
7        for (int i = 0; i < mat.size(); i++) {
8            int currentOnes = 0;
9            
10            for (int j = 0; j < mat[i].size(); j++) {
11                if (mat[i][j] == 1) {
12                    currentOnes++;
13                }
14            }
15            
16            if (currentOnes > maxCount) {
17                maxCount = currentOnes;
18                maxRow = i;
19            }
20        }
21        
22        return {maxRow, maxCount};
23    }
24};