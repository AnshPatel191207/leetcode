// Last updated: 05/08/2026, 11:14:16
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                positives.push_back(nums[i]);
            } else {
                negatives.push_back(nums[i]);
            }
        }
        
        vector<int> ans;
        
        for (int i = 0; i < positives.size(); i++) {
            ans.push_back(positives[i]);
            ans.push_back(negatives[i]);
        }
        
        return ans;
    }
};