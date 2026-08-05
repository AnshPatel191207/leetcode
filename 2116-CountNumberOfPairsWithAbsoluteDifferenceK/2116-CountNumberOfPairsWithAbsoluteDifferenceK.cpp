// Last updated: 05/08/2026, 11:14:55
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    count++;
                }
            }
        }
        
        return count;
    }
};