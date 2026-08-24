// Last updated: 24/08/2026, 15:11:06
1class Solution {
2public:
3    ListNode* detectCycle(ListNode* head) {
4        ListNode* slow = head;
5        ListNode* fast = head;
6
7        while (fast && fast->next) {
8            slow = slow->next;
9            fast = fast->next->next;
10
11            if (slow == fast) {
12                ListNode* ptr = head;
13
14                while (ptr != slow) {
15                    ptr = ptr->next;
16                    slow = slow->next;
17                }
18                return ptr;
19            }
20        }
21        return nullptr;
22    }
23};