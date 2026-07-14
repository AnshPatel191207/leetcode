// Last updated: 14/07/2026, 22:02:59
1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4        int n = s.length();
5        string shuffled = s; 
6        
7        for (int i = 0; i < n; i++) {
8            shuffled[indices[i]] = s[i];
9        }
10        
11        return shuffled;
12    }
13};