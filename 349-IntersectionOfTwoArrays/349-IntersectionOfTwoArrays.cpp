// Last updated: 05/08/2026, 11:19:51
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        for (int i = 0; i < nums1.size(); i++) {
            set1.insert(nums1[i]);
        }
        
        vector<int> result;
        
        for (int j = 0; j < nums2.size(); j++) {
            int num = nums2[j];
            if (set1.count(num)) {
                result.push_back(num);
                set1.erase(num);
            }
        }
        
        return result;
    }
};