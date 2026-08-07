// Last updated: 07/08/2026, 16:12:08
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        if (!head)
6            return head;
7
8        while (head && head->next && head->val == head->next->val) {
9            int value = head->val;
10
11            while (head && head->val == value) {
12                head = head->next;
13            }
14        }
15
16        if (!head)
17            return nullptr;
18
19        ListNode* prev = head;
20        ListNode* curr = head->next;
21
22        while (curr) {
23
24            if (curr->next && curr->val == curr->next->val) {
25
26                int value = curr->val;
27
28                while (curr && curr->val == value) {
29                    curr = curr->next;
30                }
31
32                prev->next = curr;
33            } else {
34                prev = curr;
35                curr = curr->next;
36            }
37        }
38
39        return head;
40    }
41};