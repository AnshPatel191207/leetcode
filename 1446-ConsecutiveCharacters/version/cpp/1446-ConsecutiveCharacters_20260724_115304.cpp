// Last updated: 24/07/2026, 11:53:04
1class Solution {
2public:
3    int maxPower(string s) {
4        int maxLen = 1;
5        int currentLen = 1;
6
7        for (int i = 1; i < s.length(); i++) {
8            if (s[i] == s[i - 1]) {
9                currentLen++;
10                if (currentLen > maxLen) {
11                    maxLen = currentLen;
12                }
13            } else {
14                currentLen = 1;
15            }
16        }
17
18        return maxLen;
19    }
20};