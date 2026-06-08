// Last updated: 08/06/2026, 20:11:51
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector<int> positives;
5        vector<int> negatives;
6        
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] > 0) {
9                positives.push_back(nums[i]);
10            } else {
11                negatives.push_back(nums[i]);
12            }
13        }
14        
15        vector<int> ans;
16        
17        for (int i = 0; i < positives.size(); i++) {
18            ans.push_back(positives[i]);
19            ans.push_back(negatives[i]);
20        }
21        
22        return ans;
23    }
24};