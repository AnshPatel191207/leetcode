// Last updated: 15/07/2026, 22:54:37
1class Solution {
2public:
3    int minimumSum(vector<int>& nums) {
4        int min_sum = -1;
5        int n = nums.size();
6        
7        for (int i = 0; i < n - 2; i++) {
8            
9            for (int j = i + 1; j < n - 1; j++) {
10                
11                if (nums[i] < nums[j]) {
12                    
13                    for (int k = j + 1; k < n; k++) {
14                        
15                        if (nums[k] < nums[j]) {
16                            
17                            int current_sum = nums[i] + nums[j] + nums[k];
18                            
19                            if (min_sum == -1 || current_sum < min_sum) {
20                                min_sum = current_sum;
21                            }
22                        }
23                    }
24                }
25            }
26        }
27        
28        return min_sum;
29    }
30};