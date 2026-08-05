// Last updated: 05/08/2026, 11:11:50
class Solution {
private:
    int getDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int minElement(vector<int>& nums) {
        
        int min_val = 1e9; 
        
        for (int i = 0; i < nums.size(); i++) {
            int current_sum = getDigitSum(nums[i]);

            if (current_sum < min_val) {
                min_val = current_sum;
            }
        }
        
        return min_val;
    }
};