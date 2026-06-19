// Last updated: 19/06/2026, 18:08:19
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int first = -1, last = -1;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] == target) {
7                if (first == -1) {
8                    first = i;
9                }
10                last = i;
11            }
12        }
13        return {first, last};
14    }
15};