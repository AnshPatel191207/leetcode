// Last updated: 25/07/2026, 09:22:34
1class Solution {
2public:
3    int findFinalValue(vector<int>& nums, int original) {
4        sort(nums.begin(), nums.end());
5        
6        for (int i = 0; i < nums.size(); ++i) {
7            if (nums[i] == original) {
8                original *= 2;
9            }
10        }
11        
12        return original;
13    }
14};