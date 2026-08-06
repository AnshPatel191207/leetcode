// Last updated: 06/08/2026, 15:52:36
1class Solution {
2public:
3    string countAndSay(int n) {
4        string ans = "1";
5
6        for (int i = 2; i <= n; i++) {
7            string temp = "";
8            int count = 1;
9
10            for (int j = 0; j < ans.size(); j++) {
11                if (j + 1 < ans.size() && ans[j] == ans[j + 1]) {
12                    count++;
13                }
14                else {
15                    temp += to_string(count);
16                    temp += ans[j];
17                    count = 1;
18                }
19            }
20            ans = temp;
21        }
22        return ans;
23    }
24};