// Last updated: 25/07/2026, 09:29:45
1class Solution {
2public:
3    bool checkIfExist(vector<int>& arr) {
4        int n = arr.size();
5
6        for (int i = 0; i < n; ++i) {
7            for (int j = 0; j < n; ++j) {
8                if (i != j && arr[i] == 2 * arr[j]) {
9                    return true;
10                }
11            }
12        }
13
14        return false;
15    }
16};