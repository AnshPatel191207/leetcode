// Last updated: 15/06/2026, 09:50:40
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        int spaceCount = 0;
5        
6        for (int i = 0; i < s.length(); i++) {
7            if (s[i] == ' ') {
8                spaceCount++;
9            }
10            
11            if (spaceCount == k) {
12                return s.substr(0, i);
13            }
14        }
15        
16        return s;
17    }
18};