// Last updated: 29/08/2026, 13:14:01
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int i = 0, j = 0;
5
6        while (i < nums1.size() && j < nums2.size()) {
7            if (nums1[i] == nums2[j]) {
8                return nums1[i];
9            }
10
11            if (nums1[i] < nums2[j]) {
12                i++;
13            } else {
14                j++;
15            }
16        }
17
18        return -1;
19    }
20};