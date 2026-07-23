// Last updated: 23/07/2026, 15:26:44
1class Solution {
2public:
3    int countHillValley(vector<int>& nums) {
4        vector<int> uniqueNums;
5        uniqueNums.push_back(nums[0]);
6        
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] != nums[i - 1]) {
9                uniqueNums.push_back(nums[i]);
10            }
11        }
12
13        int count = 0;
14        int n = uniqueNums.size();
15
16        for (int i = 1; i < n - 1; i++) {
17            if (uniqueNums[i] > uniqueNums[i - 1] && uniqueNums[i] > uniqueNums[i + 1]) {
18                count++;
19            }
20            else if (uniqueNums[i] < uniqueNums[i - 1] && uniqueNums[i] < uniqueNums[i + 1]) {
21                count++;
22            }
23        }
24
25        return count;
26    }
27};