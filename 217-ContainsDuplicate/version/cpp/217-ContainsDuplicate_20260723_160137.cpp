// Last updated: 23/07/2026, 16:01:37
1#include <vector>
2#include <algorithm>
3
4using namespace std;
5
6class Solution {
7public:
8    bool containsDuplicate(vector<int>& nums) {
9        sort(nums.begin(), nums.end());
10        for (size_t i = 1; i < nums.size(); ++i) {
11            if (nums[i] == nums[i - 1]) {
12                return true;
13            }
14        }
15        return false;
16    }
17};