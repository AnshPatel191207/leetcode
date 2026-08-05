// Last updated: 05/08/2026, 11:13:22
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        
        for (int i = 0; i < n; ++i) {
            totalSum += nums[i];
        }
        
        vector<int> answer(n);
        int leftSum = 0;
        
        for (int i = 0; i < n; ++i) {
            int rightSum = totalSum - leftSum - nums[i];
            
            int diff = leftSum - rightSum;
            answer[i] = (diff < 0) ? -diff : diff;
            
            leftSum += nums[i];
        }
        
        return answer;
    }
};