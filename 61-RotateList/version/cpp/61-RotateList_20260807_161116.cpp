// Last updated: 07/08/2026, 16:11:16
1class Solution {
2public:
3    ListNode* rotateRight(ListNode* head, int k) {
4        if (!head || !head->next || k == 0) {
5            return head;
6        }
7
8        ListNode* temp = head;
9        int length = 1;
10        while (temp->next) {
11            length++;
12            temp = temp->next;
13        }
14
15        k = k % length;
16
17        if (k == 0) {
18            return head;
19        }
20
21        temp->next = head;
22        int num = length - k - 1;
23        ListNode* temp1 = head;
24
25        while (num--) {
26            temp1 = temp1->next;
27        }
28        
29        ListNode* head2 = temp1->next;
30        temp1->next = nullptr;
31
32        return head2;
33    }
34};