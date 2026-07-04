// Last updated: 04/07/2026, 19:26:49
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        for (int i = 1; i < nums.size(); i++) {
5            nums[i] += nums[i - 1];
6        }
7        return nums;
8    }
9};