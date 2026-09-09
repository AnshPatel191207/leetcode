// Last updated: 09/09/2026, 09:24:14
1class Solution {
2public:
3    int residuePrefixes(string s) {
4        unordered_set<char> st;
5        int ans = 0;
6
7        for (int i = 1; i <= s.size(); i++) {
8            st.insert(s[i - 1]);
9
10            if (st.size() == i % 3) {
11                ans++;
12            }
13        }
14
15        return ans;
16    }
17};