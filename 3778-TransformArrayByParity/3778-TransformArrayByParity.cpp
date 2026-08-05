// Last updated: 05/08/2026, 11:11:39
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evenCount = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                evenCount++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (i < evenCount) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }
        
        return nums;
    }
};