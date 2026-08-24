// Last updated: 24/08/2026, 15:24:15
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int n = nums.size();
5
6        for (int i = 0; i < n; i++) {
7            while (nums[i] > 0 &&
8                   nums[i] <= n &&
9                   nums[i] != nums[nums[i] - 1]) {
10                swap(nums[i], nums[nums[i] - 1]);
11            }
12        }
13
14        for (int i = 0; i < n; i++) {
15            if (nums[i] != i + 1)
16                return i + 1;
17        }
18
19        return n + 1;
20    }
21};