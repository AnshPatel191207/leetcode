// Last updated: 27/08/2026, 12:38:13
1class Solution {
2public:
3    bool isSubstringPresent(string s) {
4        bool seen[26][26] = {};
5
6        int n = s.size();
7
8        for (int i = 0; i < n - 1; i++) {
9            seen[s[i + 1] - 'a'][s[i] - 'a'] = true;
10        }
11
12        for (int i = 0; i < n - 1; i++) {
13            if (seen[s[i] - 'a'][s[i + 1] - 'a']) {
14                return true;
15            }
16        }
17
18        return false;
19    }
20};