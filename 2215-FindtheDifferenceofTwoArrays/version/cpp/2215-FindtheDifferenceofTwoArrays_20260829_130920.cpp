// Last updated: 29/08/2026, 13:09:20
1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> s1(nums1.begin(), nums1.end());
5        unordered_set<int> s2(nums2.begin(), nums2.end());
6
7        vector<vector<int>> ans(2);
8
9        for (int x : s1) {
10            if (!s2.count(x))
11                ans[0].push_back(x);
12        }
13
14        for (int x : s2) {
15            if (!s1.count(x))
16                ans[1].push_back(x);
17        }
18
19        return ans;
20    }
21};