// Last updated: 29/07/2026, 15:52:27
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int count0 = 0, count1 = 0, count2 = 0;
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 0) count0++;
8            else if (nums[i] == 1) count1++;
9            else count2++;
10        }
11
12        int i = 0;
13
14        while (count0 > 0) {
15            nums[i] = 0;
16            i++;
17            count0--;
18        }
19
20        while (count1 > 0) {
21            nums[i] = 1;
22            i++;
23            count1--;
24        }
25
26        while (count2 > 0) {
27            nums[i] = 2;
28            i++;
29            count2--;
30        }
31    }
32};