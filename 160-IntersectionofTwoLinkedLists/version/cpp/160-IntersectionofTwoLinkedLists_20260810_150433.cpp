// Last updated: 10/08/2026, 15:04:33
1class Solution {
2public:
3    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
4        if (headA == nullptr || headB == nullptr) {
5            return nullptr;
6        }
7
8        ListNode *ptrA = headA;
9        ListNode *ptrB = headB;
10
11        while (ptrA != ptrB) {
12            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
13            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
14        }
15
16        return ptrA;
17    }
18};