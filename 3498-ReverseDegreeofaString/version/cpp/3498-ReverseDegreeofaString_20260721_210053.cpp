// Last updated: 21/07/2026, 21:00:53
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int totalDegree = 0;
5        int n = s.length();
6        
7        for (int i = 0; i < n; i++) {
8            int revAlphabetIndex = 26 - (s[i] - 'a');
9            
10            int stringIndex = i + 1;
11            
12            totalDegree += revAlphabetIndex * stringIndex;
13        }
14        
15        return totalDegree;
16    }
17};