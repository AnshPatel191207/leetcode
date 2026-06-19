// Last updated: 19/06/2026, 17:17:59
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        vector<int> result;
6        
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] == target) {
9                result.push_back(i);
10            }
11        }
12        
13        return result;
14    }
15};