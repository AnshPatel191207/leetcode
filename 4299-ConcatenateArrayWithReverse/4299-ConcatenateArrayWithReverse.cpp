// Last updated: 05/08/2026, 11:10:54
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[n - i - 1];
        }

        return ans;
    }
};