// Last updated: 18/08/2026, 16:00:52
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int operations = 0;
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] <= nums[i - 1]) {
8                operations += (nums[i - 1] + 1 - nums[i]);
9                nums[i] = nums[i - 1] + 1;
10            }
11        }
12
13        return operations;
14    }
15};