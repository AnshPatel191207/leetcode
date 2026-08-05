// Last updated: 05/08/2026, 11:12:07
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] % 3 != 0) {
                operations++;
            }
        }
        
        return operations;
    }
};