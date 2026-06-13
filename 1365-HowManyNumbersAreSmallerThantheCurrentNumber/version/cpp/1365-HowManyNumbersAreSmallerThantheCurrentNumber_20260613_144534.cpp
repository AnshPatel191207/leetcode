// Last updated: 13/06/2026, 14:45:34
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result(n, 0);
6
7        for (int i = 0; i < n; i++) {
8            int count = 0;
9            for (int j = 0; j < n; j++) {
10                if (nums[j] < nums[i]) {
11                    count++;
12                }
13            }
14            result[i] = count;
15        }
16        return result;
17    }
18};