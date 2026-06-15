// Last updated: 15/06/2026, 20:00:56
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<int> result;
6        
7        for (size_t i = 1; i < nums.size(); ++i) {
8            if (nums[i] == nums[i - 1]) {
9                result.push_back(nums[i]);
10            }
11        }
12        
13        return result;
14    }
15};