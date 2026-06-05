// Last updated: 05/06/2026, 13:37:05
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string ans = ""; // empty(unique)
5        for (char ch : s) {
6            if (!ans.empty() && ans.back() == ch) {
7                ans.pop_back();
8            } else {
9                ans.push_back(ch);
10            }
11        }
12        return ans;
13    }
14};