// Last updated: 07/06/2026, 19:59:35
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4
5        vector<int> expected = heights;
6        sort(expected.begin(), expected.end());
7        
8        int mismatchCount = 0;
9        
10        for (int i = 0; i < heights.size(); i++) {
11            if (heights[i] != expected[i]) {
12                mismatchCount++;
13            }
14        }
15        
16        return mismatchCount;
17    }
18};