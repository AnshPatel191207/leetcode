// Last updated: 05/08/2026, 11:18:25
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1;
        int secondMaxVal = -1;
        int maxIndex = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > maxVal) {
                secondMaxVal = maxVal;
                maxVal = nums[i];
                maxIndex = i;
            } else if (nums[i] > secondMaxVal) {
                secondMaxVal = nums[i];
            }
        }

        if (maxVal >= 2 * secondMaxVal) {
            return maxIndex;
        }

        return -1;
    }
};