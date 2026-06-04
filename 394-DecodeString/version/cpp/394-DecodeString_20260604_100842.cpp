// Last updated: 04/06/2026, 10:08:42
1class Solution {
2public:
3    string decodeString(string s) {
4        int i = 0;
5        return decode(s, i);
6    }
7
8    string decode(string& s, int& i) {
9        string result = "";
10        int k = 0;
11
12        while (i < s.size()) {
13            if (isdigit(s[i])) {
14                k = k * 10 + (s[i] - '0');
15                i++;
16            } else if (s[i] == '[') {
17                i++; // skip '['
18                string decodedPart = decode(s, i);
19
20                while (k--) {
21                    result += decodedPart;
22                }
23                k = 0;
24            } else if (s[i] == ']') {
25                i++; // skip ']'
26                return result;
27            } else {
28                result += s[i];
29                i++;
30            }
31        }
32        return result;
33    }
34};