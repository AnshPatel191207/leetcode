// Last updated: 10/08/2026, 14:57:42
1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4        vector<int> vals;
5        
6        while (head) {
7            vals.push_back(head->val);
8            head = head->next;
9        }
10
11        int left = 0, right = vals.size() - 1;
12        while (left < right) {
13            if (vals[left] != vals[right]) {
14                return false;
15            }
16            left++;
17            right--;
18        }
19
20        return true;
21    }
22};