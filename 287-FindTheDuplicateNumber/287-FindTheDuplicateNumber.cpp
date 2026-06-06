// Last updated: 06/06/2026, 19:46:51
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> Freq;
        for(int i = 0; i < nums.size(); i++) {
            if(Freq.find(nums[i]) != Freq.end()) { 
                return nums[i];
            }
            Freq[nums[i]] = 1; 
        }
        return -1;
    }
};