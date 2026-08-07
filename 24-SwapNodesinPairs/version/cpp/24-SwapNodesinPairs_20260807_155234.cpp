// Last updated: 07/08/2026, 15:52:34
1class Solution {
2public:
3    ListNode* swapPairs(ListNode* head) {
4        if (!head || !head->next) return head;
5
6        ListNode* first = head;
7        ListNode* second = head->next;
8
9        // Swap links recursively
10        first->next = swapPairs(second->next);
11        second->next = first;
12
13        return second;
14    }
15};