// Last updated: 29/08/2026, 13:11:29
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> cnt;
5
6        for (int x : nums1) {
7            cnt[x]++;
8        }
9
10        vector<int> ans;
11
12        for (int x : nums2) {
13            if (cnt[x] > 0) {
14                ans.push_back(x);
15                cnt[x]--;
16            }
17        }
18
19        return ans;
20    }
21};