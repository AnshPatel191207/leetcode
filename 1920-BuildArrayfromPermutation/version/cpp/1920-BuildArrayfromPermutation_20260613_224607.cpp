// Last updated: 13/06/2026, 22:46:07
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6        
7        for (int i = 0; i < n; i++) {
8            ans[i] = nums[nums[i]];
9        }
10        
11        return ans;
12    }
13};