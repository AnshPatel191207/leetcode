// Last updated: 09/06/2026, 15:36:07
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        long long total_sum = 0;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            total_sum = total_sum + nums[i];
8        }
9        
10        return total_sum % k;
11    }
12};