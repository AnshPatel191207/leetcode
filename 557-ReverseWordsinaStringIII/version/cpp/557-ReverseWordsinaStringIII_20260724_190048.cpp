// Last updated: 24/07/2026, 19:00:48
1class Solution {
2public:
3    string reverseWords(string s) {
4        int l = 0;
5        for (int r = 0; r <= s.length(); ++r) {
6            if (r == s.length() || s[r] == ' ') {
7                reverse(s.begin() + l, s.begin() + r);
8                l = r + 1;
9            }
10        }
11        return s;
12    }
13};