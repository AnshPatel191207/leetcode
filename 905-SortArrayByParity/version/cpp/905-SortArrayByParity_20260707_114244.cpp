// Last updated: 07/07/2026, 11:42:44
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result(n);
6        int left = 0;
7        int right = n - 1;
8        
9        for (int i = 0; i < n; i++) {
10            if ((nums[i] % 2) == 0) {
11                result[left] = nums[i];
12                left++;
13            }
14            else {
15                result[right] = nums[i];
16                right--;
17            }
18        }
19        return result;
20    }
21};