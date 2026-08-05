// Last updated: 05/08/2026, 11:11:08
class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();
        if (nums[0] > nums[n - 1]) {
            return nums[0];
        } else {
            return nums[n - 1];
        }
    }
};