// Last updated: 05/08/2026, 11:19:31
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                result.push_back(nums[i]);
            }
        }
        
        return result;
    }
};