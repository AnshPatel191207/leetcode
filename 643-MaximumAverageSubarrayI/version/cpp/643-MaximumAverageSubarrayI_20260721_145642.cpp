// Last updated: 21/07/2026, 14:56:42
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        double currentSum = 0;
5        for (int i = 0; i < k; ++i) {
6            currentSum += nums[i];
7        }
8        
9        double maxSum = currentSum;
10        
11        for (int i = k; i < nums.size(); ++i) {
12            currentSum += nums[i] - nums[i - k];
13            maxSum = max(maxSum, currentSum);
14        }
15        
16        return maxSum / k;
17    }
18};