// Last updated: 18/07/2026, 19:18:56
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int max_sum = nums[0];
5        int current_sum = nums[0];
6        
7        for (int i = 1; i < nums.size(); i++) {
8            current_sum = max(nums[i], current_sum + nums[i]);
9            
10            max_sum = max(max_sum, current_sum);
11        }
12        
13        return max_sum;
14    }
15};