// Last updated: 13/08/2026, 15:17:45
1class Solution {
2public:
3    vector<int> nextLargerNodes(ListNode* head) {
4        vector<int> values;
5        while (head!= nullptr) {
6            values.push_back(head->val);
7            head= head->next;
8        }
9
10        int n = values.size();
11        vector<int> ans(n, 0);
12
13        for (int i = 0; i < n; i++) {
14            for (int j = i + 1; j < n; j++) {
15                if (values[j] > values[i]) {
16                    ans[i] = values[j];
17                    break;
18                }
19            }
20        }
21        return ans;
22    }
23};