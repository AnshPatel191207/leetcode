// Last updated: 05/08/2026, 11:18:03
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        
        for (int i = 0; i < n; i++) {
            if ((nums[i] % 2) == 0) {
                result[left] = nums[i];
                left++;
            }
            else {
                result[right] = nums[i];
                right--;
            }
        }
        return result;
    }
};