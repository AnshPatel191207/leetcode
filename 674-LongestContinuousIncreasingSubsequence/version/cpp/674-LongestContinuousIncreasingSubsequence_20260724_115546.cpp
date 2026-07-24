// Last updated: 24/07/2026, 11:55:46
1class Solution {
2public:
3    int findLengthOfLCIS(vector<int>& nums) {
4        if (nums.empty()) return 0;
5
6        int maxLen = 1;
7        int currentLen = 1;
8
9        for (int i = 1; i < nums.size(); i++) {
10            if (nums[i] > nums[i - 1]) {
11                currentLen++;
12                if (currentLen > maxLen) {
13                    maxLen = currentLen;
14                }
15            } else {
16                currentLen = 1;
17            }
18        }
19
20        return maxLen;
21    }
22};