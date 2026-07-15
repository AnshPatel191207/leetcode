// Last updated: 15/07/2026, 20:08:08
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4        int sum = 0;
5        int count = 0;
6        int n = nums.size();
7        
8        for (int i = 0; i < n; i++) {
9            
10            if (nums[i] % 6 == 0) {
11                sum += nums[i];
12                count++;
13            }
14        }
15        
16        if (count == 0) {
17            return 0;
18        }
19        
20        return sum / count; 
21    }
22};