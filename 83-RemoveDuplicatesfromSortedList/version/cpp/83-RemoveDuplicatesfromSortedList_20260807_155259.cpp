// Last updated: 07/08/2026, 15:52:59
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        if(head == nullptr){
5            return head;
6        }
7        ListNode* temp = head;
8        while(temp != nullptr && temp->next!=nullptr){
9            if(temp->val == temp->next->val){
10                temp->next = temp->next->next;
11            }
12            else {
13                temp=temp->next;
14            }
15        }
16        return head;
17    }
18};