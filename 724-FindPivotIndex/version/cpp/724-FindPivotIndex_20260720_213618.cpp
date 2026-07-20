// Last updated: 20/07/2026, 21:36:18
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int n = nums.size();
5        int totalSum = 0;
6        
7        for (int i = 0; i < n; ++i) {
8            totalSum += nums[i];
9        }
10        
11        int leftSum = 0;
12        
13        for (int i = 0; i < n; ++i) {
14            int rightSum = totalSum - leftSum - nums[i];
15            
16            if (leftSum == rightSum) {
17                return i;
18            }
19            
20            leftSum += nums[i];
21        }
22        
23        return -1;
24    }
25};