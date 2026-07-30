// Last updated: 30/07/2026, 16:02:35
1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4        vector<int> ans;
5
6        for (int i = 0; i < nums.size(); ++i) {
7            int p = nums[i];
8            int val = -1;
9
10            for (int x = 0; x < p; ++x) {
11                if ((x | (x + 1)) == p) {
12                    val = x;
13                    break;
14                }
15            }
16
17            ans.push_back(val);
18        }
19
20        return ans;
21    }
22};