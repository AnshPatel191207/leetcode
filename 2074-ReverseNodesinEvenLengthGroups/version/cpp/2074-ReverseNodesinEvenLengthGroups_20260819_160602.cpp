// Last updated: 19/08/2026, 16:06:02
1class Solution {
2public:
3    ListNode* reverseEvenLengthGroups(ListNode* head) {
4        vector<int> vals;
5        ListNode* curr = head;
6        while (curr) {
7            vals.push_back(curr->val);
8            curr = curr->next;
9        }
10
11        int n = vals.size();
12        int idx = 0;
13        int groupSize = 1;
14
15        while (idx < n) {
16            int len = min(groupSize, n - idx);
17            if (len % 2 == 0) {
18                reverse(vals.begin() + idx, vals.begin() + idx + len);
19            }
20            idx += len;
21            groupSize++;
22        }
23
24        curr = head;
25        for (int i = 0; i < n; ++i) {
26            curr->val = vals[i];
27            curr = curr->next;
28        }
29
30        return head;
31    }
32};