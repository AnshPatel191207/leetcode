// Last updated: 05/08/2026, 11:15:15
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        for (int i = 0; i < n; i++) {
            ans[i] = nums[nums[i]];
        }
        
        return ans;
    }
};