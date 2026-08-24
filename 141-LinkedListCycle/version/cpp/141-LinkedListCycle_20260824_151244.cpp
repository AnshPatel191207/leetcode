// Last updated: 24/08/2026, 15:12:44
1class Solution {
2public:
3    bool hasCycle(ListNode *head) {
4        ListNode* slow = head;
5        ListNode* fast = head;
6
7        while (fast != nullptr && fast->next != nullptr) {
8            slow = slow->next;
9            fast = fast->next->next;
10
11            if (slow == fast) {
12                return true;
13            }
14        }
15        return false;
16    }
17};