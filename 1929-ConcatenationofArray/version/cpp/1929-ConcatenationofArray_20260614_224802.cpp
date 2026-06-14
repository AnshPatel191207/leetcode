// Last updated: 14/06/2026, 22:48:02
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        
6        vector<int> ans(2 * n);
7        
8        for (int i = 0; i < n; i++) {
9            ans[i] = nums[i];
10            ans[i + n] = nums[i];
11        }
12        
13        return ans;
14    }
15};