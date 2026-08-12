// Last updated: 12/08/2026, 15:46:00
1class Solution {
2private:
3    ListNode* reverseList(ListNode* head) {
4        ListNode* prev = nullptr;
5        ListNode* curr = head;
6        while (curr != nullptr) {
7            ListNode* nextNode = curr->next;
8            curr->next = prev;
9            prev = curr;
10            curr = nextNode;
11        }
12        return prev;
13    }
14
15public:
16    ListNode* removeNodes(ListNode* head) {
17        if (!head) return nullptr;
18
19        head = reverseList(head);
20
21        ListNode* curr = head;
22        int maxVal = curr->val;
23
24        while (curr != nullptr && curr->next != nullptr) {
25            if (curr->next->val < maxVal) {
26                curr->next = curr->next->next;
27            } else {
28                curr = curr->next;
29                maxVal = curr->val;
30            }
31        }
32
33        return reverseList(head);
34    }
35};