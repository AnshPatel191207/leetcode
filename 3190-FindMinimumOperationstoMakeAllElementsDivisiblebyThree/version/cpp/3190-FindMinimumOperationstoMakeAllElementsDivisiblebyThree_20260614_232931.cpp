// Last updated: 14/06/2026, 23:29:31
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4        int operations = 0;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            
8            if (nums[i] % 3 != 0) {
9                operations++;
10            }
11        }
12        
13        return operations;
14    }
15};