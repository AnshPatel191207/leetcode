// Last updated: 22/08/2026, 11:51:29
1class Solution {
2public:
3    bool divideArray(vector<int>& nums) {
4        int freq[501] = {0};
5
6        for (int i = 0; i < nums.size(); i++) {
7            freq[nums[i]]++;
8        }
9
10        for (int i = 1; i <= 500; i++) {
11            if (freq[i] % 2 != 0) {
12                return false;
13            }
14        }
15
16        return true;
17    }
18};