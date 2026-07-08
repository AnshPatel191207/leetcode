// Last updated: 08/07/2026, 19:29:25
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> set1;
5        for (int i = 0; i < nums1.size(); i++) {
6            set1.insert(nums1[i]);
7        }
8        
9        vector<int> result;
10        
11        for (int j = 0; j < nums2.size(); j++) {
12            int num = nums2[j];
13            if (set1.count(num)) {
14                result.push_back(num);
15                set1.erase(num);
16            }
17        }
18        
19        return result;
20    }
21};