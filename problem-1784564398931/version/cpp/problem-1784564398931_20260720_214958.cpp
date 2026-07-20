// Last updated: 20/07/2026, 21:49:58
1class Solution {
2public:
3    int waysToSplitArray(vector<int>& nums) {
4        int n = nums.size();
5        long long totalSum = 0;
6        
7        for (int i = 0; i < n; ++i) {
8            totalSum += nums[i];
9        }
10        
11        long long leftSum = 0;
12        int validSplits = 0;
13        
14        for (int i = 0; i < n - 1; ++i) {
15            leftSum += nums[i];
16            long long rightSum = totalSum - leftSum;
17            
18            if (leftSum >= rightSum) {
19                validSplits++;
20            }
21        }
22        
23        return validSplits;
24    }
25};