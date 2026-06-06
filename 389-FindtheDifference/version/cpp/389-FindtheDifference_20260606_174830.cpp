// Last updated: 06/06/2026, 17:48:30
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        int sum = 0;
5        
6        for (int i = 0; i < t.length(); i++) {
7            sum += t[i];
8        }
9        
10        for (int i = 0; i < s.length(); i++) {
11            sum -= s[i];
12        }
13        
14        return sum; 
15    }
16};