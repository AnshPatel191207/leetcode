// Last updated: 24/07/2026, 11:48:13
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxCount = 0;
5        int currentCount = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] == 1) {
9                currentCount++;
10                if (currentCount > maxCount) {
11                    maxCount = currentCount;
12                }
13            } else {
14                currentCount = 0;
15            }
16        }
17
18        return maxCount;
19    }
20};