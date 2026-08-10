// Last updated: 10/08/2026, 15:20:25
1class Solution {
2public:
3    int getDecimalValue(ListNode* head) {
4        int result = 0;
5        ListNode* curr = head;
6        
7        while (curr != nullptr) {
8            result = (result << 1) | curr->val;
9            curr = curr->next;
10        }
11        
12        return result;
13    }
14};