// Last updated: 10/08/2026, 14:52:19
1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4        if (!head || left == right) return head;
5
6        ListNode* prev = nullptr;
7        ListNode* curr = head;
8
9        for (int i = 1; i < left; ++i) {
10            prev = curr;
11            curr = curr->next;
12        }
13
14        ListNode* con = prev;
15        ListNode* tail = curr;
16        ListNode* next = nullptr;
17
18        for (int i = 0; i <= right - left; ++i) {
19            next = curr->next;
20            curr->next = prev;
21            prev = curr;
22            curr = next;
23        }
24
25        if (con != nullptr) {
26            con->next = prev;
27        } else {
28            head = prev;
29        }
30
31        tail->next = curr;
32
33        return head;
34    }
35};