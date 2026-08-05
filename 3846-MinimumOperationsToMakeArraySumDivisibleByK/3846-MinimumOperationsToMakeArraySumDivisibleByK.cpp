// Last updated: 05/08/2026, 11:11:27
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long total_sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            total_sum = total_sum + nums[i];
        }
        
        return total_sum % k;
    }
};