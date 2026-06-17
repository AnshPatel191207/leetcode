// Last updated: 17/06/2026, 06:31:19
1class Solution {
2public:
3    vector<int> transformArray(vector<int>& nums) {
4        int evenCount = 0;
5        int n = nums.size();
6        
7        for (int i = 0; i < n; i++) {
8            if (nums[i] % 2 == 0) {
9                evenCount++;
10            }
11        }
12        
13        for (int i = 0; i < n; i++) {
14            if (i < evenCount) {
15                nums[i] = 0;
16            } else {
17                nums[i] = 1;
18            }
19        }
20        
21        return nums;
22    }
23};