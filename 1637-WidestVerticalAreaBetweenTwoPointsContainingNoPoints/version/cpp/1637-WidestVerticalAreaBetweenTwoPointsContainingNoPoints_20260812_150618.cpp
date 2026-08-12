// Last updated: 12/08/2026, 15:06:18
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        int n = points.size();
5        vector<int> xCoords(n);
6        
7        for (int i = 0; i < n; ++i) {
8            xCoords[i] = points[i][0];
9        }
10        
11        sort(xCoords.begin(), xCoords.end());
12        
13        int maxWidth = 0;
14        for (int i = 1; i < n; ++i) {
15            int gap = xCoords[i] - xCoords[i - 1];
16            if (gap > maxWidth) {
17                maxWidth = gap;
18            }
19        }
20        
21        return maxWidth;
22    }
23};