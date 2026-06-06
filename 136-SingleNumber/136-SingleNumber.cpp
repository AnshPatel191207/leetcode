// Last updated: 06/06/2026, 19:47:02
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count == 1){
                return nums[i];
            }
        }
        return 0;
    }
};