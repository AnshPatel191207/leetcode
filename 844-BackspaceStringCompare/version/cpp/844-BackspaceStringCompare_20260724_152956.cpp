// Last updated: 24/07/2026, 15:29:56
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4        string resS = "";
5        string resT = "";
6
7        for (int i = 0; i < s.length(); i++) {
8            if (s[i] == '#') {
9                if (!resS.empty()) {
10                    resS.pop_back();
11                }
12            } else {
13                resS.push_back(s[i]);
14            }
15        }
16
17        for (int i = 0; i < t.length(); i++) {
18            if (t[i] == '#') {
19                if (!resT.empty()) {
20                    resT.pop_back();
21                }
22            } else {
23                resT.push_back(t[i]);
24            }
25        }
26
27        return resS == resT;
28    }
29};