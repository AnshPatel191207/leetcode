// Last updated: 18/07/2026, 18:30:10
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int mn = nums[0];
5        int mx = nums[0];
6        
7        for (int i = 1; i < nums.size(); ++i) {
8            if (nums[i] < mn) {
9                mn = nums[i];
10            }
11            if (nums[i] > mx) {
12                mx = nums[i];
13            }
14        }
15        
16        while (mx % mn != 0) {
17            int remainder = mx % mn;
18            mx = mn;
19            mn = remainder;
20        }
21        
22        return mn;
23    }
24};