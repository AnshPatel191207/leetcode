// Last updated: 24/07/2026, 11:45:13
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            int val = abs(nums[i]);
6            int targetIdx = val - 1;
7            
8            if (nums[targetIdx] > 0) {
9                nums[targetIdx] = -nums[targetIdx];
10            }
11        }
12        
13        vector<int> missing;
14        for (int i = 0; i < nums.size(); i++) {
15            if (nums[i] > 0) {
16                missing.push_back(i + 1);
17            }
18        }
19        
20        return missing;
21    }
22};