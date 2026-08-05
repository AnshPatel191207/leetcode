// Last updated: 05/08/2026, 11:15:19
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int totalOr = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            totalOr |= nums[i];
        }
        
        return totalOr << (nums.size() - 1);
    }
};