// Last updated: 06/06/2026, 19:45:51
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                sum = sum + nums[i];
            }
            else{
                sum = sum - nums[i];
            }
        }
        return sum;
    }
};