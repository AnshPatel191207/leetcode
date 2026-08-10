// Last updated: 10/08/2026, 15:02:15
1class Solution {
2public:
3    Node* flatten(Node* head) {
4        if (!head) return nullptr;
5
6        Node* curr = head;
7
8        while (curr != nullptr) {
9            if (curr->child != nullptr) {
10                Node* nextNode = curr->next;
11                Node* childHead = curr->child;
12
13                Node* childTail = childHead;
14                while (childTail->next != nullptr) {
15                    childTail = childTail->next;
16                }
17
18                curr->next = childHead;
19                childHead->prev = curr;
20                curr->child = nullptr;
21
22                if (nextNode != nullptr) {
23                    childTail->next = nextNode;
24                    nextNode->prev = childTail;
25                }
26            }
27            curr = curr->next;
28        }
29
30        return head;
31    }
32};