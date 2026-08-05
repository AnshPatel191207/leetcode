// Last updated: 05/08/2026, 11:17:20
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            
            while (freq > 0) {
                result.push_back(val);
                freq--;
            }
        }
        return result;
    }
};