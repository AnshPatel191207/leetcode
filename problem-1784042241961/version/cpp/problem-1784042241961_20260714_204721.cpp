// Last updated: 14/07/2026, 20:47:21
1class Solution {
2public:
3    vector<int> decompressRLElist(vector<int>& nums) {
4        vector<int> result;
5        
6        for (int i = 0; i < nums.size(); i += 2) {
7            int freq = nums[i];
8            int val = nums[i + 1];
9            
10            while (freq > 0) {
11                result.push_back(val);
12                freq--;
13            }
14        }
15        return result;
16    }
17};