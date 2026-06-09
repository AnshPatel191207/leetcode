// Last updated: 09/06/2026, 15:13:08
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string result = "";
5        int opened = 0;
6        
7        for (int i = 0; i < s.length(); i++) {
8            if (s[i] == '(') {
9                if (opened > 0) {
10                    result += s[i];
11                }
12                opened++;
13            } else {
14                opened--;
15                if (opened > 0) {
16                    result += s[i];
17                }
18            }
19        }
20        return result;
21    }
22};