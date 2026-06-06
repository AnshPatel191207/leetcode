// Last updated: 06/06/2026, 19:46:53
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, insertPos = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[insertPos], nums[i]);
                insertPos++;
            }
        }
    }
};