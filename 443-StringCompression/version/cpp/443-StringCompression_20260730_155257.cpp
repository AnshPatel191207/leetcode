// Last updated: 30/07/2026, 15:52:57
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        vector<char> temp;
5        int n = chars.size();
6
7        for (int i = 0; i < n; ) {
8            int j = i;
9
10            for (j = i; j < n && chars[j] == chars[i]; j++) {
11                
12            }
13
14            temp.push_back(chars[i]);
15
16            int count = j - i;
17            if (count > 1) {
18                string s = to_string(count);
19                for (int k = 0; k < s.length(); k++) {
20                    temp.push_back(s[k]);
21                }
22            }
23
24            i = j;
25        }
26
27        chars.clear();
28        for (int i = 0; i < temp.size(); i++) {
29            chars.push_back(temp[i]);
30        }
31
32        return chars.size();
33    }
34};