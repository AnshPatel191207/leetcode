// Last updated: 06/06/2026, 19:44:55
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char diff = 0;
5        
6        for (int i = 0; i < t.length(); i++) {
7            diff += t[i];
8        }
9        
10        for (int i = 0; i < s.length(); i++) {
11            diff -= s[i];
12        }
13        
14        return diff; 
15    }
16};