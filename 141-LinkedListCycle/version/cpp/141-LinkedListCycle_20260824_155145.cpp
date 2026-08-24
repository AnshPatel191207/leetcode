// Last updated: 24/08/2026, 15:51:45
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int n = nums.size();
5
6        for (int i = 0; i < n; i++) {
7            while (nums[i] > 0 && nums[i] < n && nums[i] != nums[nums[i] - 1]) {
8                swap(nums[i], nums[nums[i] - 1]);
9            }
10        }
11        for (int i = 0; i < n; i++) {
12            if (nums[i] != i + 1) {
13                return i + 1;
14            }
15        }
16        return n + 1;
17    }
18};