// Last updated: 10/08/2026, 14:59:02
1class Solution {
2public:
3    ListNode* removeElements(ListNode* head, int val) {
4        while (head != nullptr && head->val == val) {
5            ListNode* temp = head;
6            head = head->next;
7            delete temp;
8        }
9
10        ListNode* curr = head;
11        while (curr != nullptr && curr->next != nullptr) {
12            if (curr->next->val == val) {
13                ListNode* temp = curr->next;
14                curr->next = curr->next->next;
15                delete temp;
16            } else {
17                curr = curr->next;
18            }
19        }
20
21        return head;
22    }
23};