// Last updated: 05/08/2026, 11:13:25
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            elementSum += num;
            
            while (num > 0) {
                digitSum += num % 10;
                num /= 10;
            }
        }
        
        return elementSum - digitSum;
    }
};