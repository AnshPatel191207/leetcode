// Last updated: 25/07/2026, 09:16:28
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int maxVal = -1;
5        int secondMaxVal = -1;
6        int maxIndex = -1;
7
8        for (int i = 0; i < nums.size(); ++i) {
9            if (nums[i] > maxVal) {
10                secondMaxVal = maxVal;
11                maxVal = nums[i];
12                maxIndex = i;
13            } else if (nums[i] > secondMaxVal) {
14                secondMaxVal = nums[i];
15            }
16        }
17
18        if (maxVal >= 2 * secondMaxVal) {
19            return maxIndex;
20        }
21
22        return -1;
23    }
24};