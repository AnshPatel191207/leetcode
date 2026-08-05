// Last updated: 05/08/2026, 11:19:22
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int val = abs(nums[i]);
            int targetIdx = val - 1;
            
            if (nums[targetIdx] > 0) {
                nums[targetIdx] = -nums[targetIdx];
            }
        }
        
        vector<int> missing;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing.push_back(i + 1);
            }
        }
        
        return missing;
    }
};