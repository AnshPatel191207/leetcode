// Last updated: 07/07/2026, 11:28:40
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int elementSum = 0;
5        int digitSum = 0;
6        
7        for (int i = 0; i < nums.size(); i++) {
8            int num = nums[i];
9            elementSum += num;
10            
11            while (num > 0) {
12                digitSum += num % 10;
13                num /= 10;
14            }
15        }
16        
17        return elementSum - digitSum;
18    }
19};