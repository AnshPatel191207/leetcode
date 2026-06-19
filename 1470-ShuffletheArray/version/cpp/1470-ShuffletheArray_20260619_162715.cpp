// Last updated: 19/06/2026, 16:27:15
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        
5        vector<int> result(2 * n);
6        
7        for (int i = 0; i < n; i++) {
8            result[2 * i] = nums[i];
9            result[2 * i + 1] = nums[n + i];
10        }
11        
12        return result;
13    }
14};