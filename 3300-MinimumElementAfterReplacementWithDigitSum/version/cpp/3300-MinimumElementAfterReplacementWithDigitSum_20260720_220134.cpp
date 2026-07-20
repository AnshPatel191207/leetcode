// Last updated: 20/07/2026, 22:01:34
1class Solution {
2private:
3    int getDigitSum(int n) {
4        int sum = 0;
5        while (n > 0) {
6            sum += n % 10;
7            n /= 10;
8        }
9        return sum;
10    }
11
12public:
13    int minElement(vector<int>& nums) {
14        
15        int min_val = 1e9; 
16        
17        for (int i = 0; i < nums.size(); i++) {
18            int current_sum = getDigitSum(nums[i]);
19
20            if (current_sum < min_val) {
21                min_val = current_sum;
22            }
23        }
24        
25        return min_val;
26    }
27};