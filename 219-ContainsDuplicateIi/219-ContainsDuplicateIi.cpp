// Last updated: 05/08/2026, 11:20:28
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num_to_index;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (num_to_index.find(nums[i]) != num_to_index.end()) {
                
                if (i - num_to_index[nums[i]] <= k) {
                    return true;
                }
            }
            
            num_to_index[nums[i]] = i;
        }
        
        return false;
    }
};