// Last updated: 05/08/2026, 11:12:35
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int min_sum = -1;
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            
            for (int j = i + 1; j < n - 1; j++) {
                
                if (nums[i] < nums[j]) {
                    
                    for (int k = j + 1; k < n; k++) {
                        
                        if (nums[k] < nums[j]) {
                            
                            int current_sum = nums[i] + nums[j] + nums[k];
                            
                            if (min_sum == -1 || current_sum < min_sum) {
                                min_sum = current_sum;
                            }
                        }
                    }
                }
            }
        }
        
        return min_sum;
    }
};