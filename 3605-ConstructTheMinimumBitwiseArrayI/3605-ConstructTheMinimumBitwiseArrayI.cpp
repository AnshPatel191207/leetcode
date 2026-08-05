// Last updated: 05/08/2026, 11:11:53
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); ++i) {
            int p = nums[i];
            int val = -1;

            for (int x = 0; x < p; ++x) {
                if ((x | (x + 1)) == p) {
                    val = x;
                    break;
                }
            }

            ans.push_back(val);
        }

        return ans;
    }
};