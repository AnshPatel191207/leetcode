// Last updated: 20/07/2026, 21:32:31
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        int n = nums.size();
5        int totalSum = 0;
6        
7        for (int i = 0; i < n; ++i) {
8            totalSum += nums[i];
9        }
10        
11        vector<int> answer(n);
12        int leftSum = 0;
13        
14        for (int i = 0; i < n; ++i) {
15            int rightSum = totalSum - leftSum - nums[i];
16            
17            int diff = leftSum - rightSum;
18            answer[i] = (diff < 0) ? -diff : diff;
19            
20            leftSum += nums[i];
21        }
22        
23        return answer;
24    }
25};