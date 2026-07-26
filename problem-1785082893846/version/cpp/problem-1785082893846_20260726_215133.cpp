// Last updated: 26/07/2026, 21:51:33
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int open_needed = 0;
5        int close_needed = 0;
6
7        for (int i = 0; i < s.length(); i++) {
8            if (s[i] == '(') {
9                close_needed++;
10            } else {
11                if (close_needed > 0) {
12                    close_needed--;
13                } else {
14                    open_needed++;
15                }
16            }
17        }
18
19        return open_needed + close_needed;
20    }
21};