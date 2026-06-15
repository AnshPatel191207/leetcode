// Last updated: 15/06/2026, 09:40:06
1class Solution {
2public:
3    int countSegments(string s) {
4        int segmentCount = 0;
5        
6        for (int i = 0; i < s.length(); i++) {
7            
8            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
9                segmentCount++;
10            }
11        }
12        
13        return segmentCount;
14    }
15};