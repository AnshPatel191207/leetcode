// Last updated: 10/08/2026, 14:56:27
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4        ListNode* prev = nullptr;
5        ListNode* curr = head;
6
7        while (curr != nullptr) {
8            ListNode* nextTemp = curr->next;
9            curr->next = prev;
10            prev = curr;
11            curr = nextTemp;
12        }
13
14        return prev;
15    }
16};