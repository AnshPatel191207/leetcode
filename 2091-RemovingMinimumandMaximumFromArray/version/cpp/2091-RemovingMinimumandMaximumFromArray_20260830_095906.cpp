// Last updated: 30/08/2026, 09:59:06
1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4        int n = nums.size();
5
6        int minIdx = min_element(nums.begin(), nums.end()) - nums.begin();
7        int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin();
8
9        if (minIdx > maxIdx)
10            swap(minIdx, maxIdx);
11
12        int front = maxIdx + 1;
13
14        int back = n - minIdx;
15
16        int both = (minIdx + 1) + (n - maxIdx);
17
18        return min({front, back, both});
19    }
20};