// Last updated: 05/08/2026, 11:13:44
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            
            if (nums[i] % 6 == 0) {
                sum += nums[i];
                count++;
            }
        }
        
        if (count == 0) {
            return 0;
        }
        
        return sum / count; 
    }
};