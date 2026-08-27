// Last updated: 27/08/2026, 12:37:12
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) {
4        int left = 0;
5        int ones = 0;
6
7        string ans = "";
8        int bestLen = INT_MAX;
9
10        for (int right = 0; right < s.size(); right++) {
11            if (s[right] == '1')
12                ones++;
13
14            while (ones > k) {
15                if (s[left] == '1')
16                    ones--;
17                left++;
18            }
19
20            while (ones == k && left < right && s[left] == '0')
21                left++;
22
23            if (ones == k) {
24                string cur = s.substr(left, right - left + 1);
25
26                if (cur.size() < bestLen) {
27                    bestLen = cur.size();
28                    ans = cur;
29                } else if (cur.size() == bestLen && cur < ans) {
30                    ans = cur;
31                }
32            }
33        }
34
35        return ans;
36    }
37};