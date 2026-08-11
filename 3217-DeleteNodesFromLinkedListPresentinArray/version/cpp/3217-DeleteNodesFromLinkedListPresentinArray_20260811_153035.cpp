// Last updated: 11/08/2026, 15:30:35
1class Solution {
2public:
3    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
4        vector<bool> present(100001, false);
5        for (int x : nums) {
6            present[x] = true;
7        }
8
9        while (head != nullptr && present[head->val]) {
10            head = head->next;
11        }
12
13        ListNode* curr = head;
14        while (curr != nullptr && curr->next != nullptr) {
15            if (present[curr->next->val]) {
16                curr->next = curr->next->next;
17            } else {
18                curr = curr->next;
19            }
20        }
21
22        return head;
23    }
24};