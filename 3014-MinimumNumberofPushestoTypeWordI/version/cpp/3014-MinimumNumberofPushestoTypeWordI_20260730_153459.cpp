// Last updated: 30/07/2026, 15:34:59
1class Solution {
2public:
3    int minimumPushes(string word) {
4        int n = word.length();
5        int pushes = 0;
6
7        for (int i = 0; i < n; i++) {
8            pushes += (i / 8) + 1;
9        }
10
11        return pushes;
12    }
13};