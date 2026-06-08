// Last updated: 08/06/2026, 20:07:20
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> result;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] < pivot) {
8                result.push_back(nums[i]);
9            }
10        }
11        
12        for (int i = 0; i < nums.size(); i++) {
13            if (nums[i] == pivot) {
14                result.push_back(nums[i]);
15            }
16        }
17        
18        for (int i = 0; i < nums.size(); i++) {
19            if (nums[i] > pivot) {
20                result.push_back(nums[i]);
21            }
22        }
23        
24        return result;
25    }
26};