// Last updated: 15/07/2026, 19:52:16
1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4        int count = 0;
5        int n = nums.size();
6        
7        for (int a = 0; a < n - 3; a++) {
8            
9            for (int b = a + 1; b < n - 2; b++) {
10                
11                for (int c = b + 1; c < n - 1; c++) {
12                    
13                    for (int d = c + 1; d < n; d++) {
14                        
15                        if (nums[a] + nums[b] + nums[c] == nums[d]) {
16                            count++;
17                        }
18                    }
19                }
20            }
21        }
22        
23        return count;
24    }
25};