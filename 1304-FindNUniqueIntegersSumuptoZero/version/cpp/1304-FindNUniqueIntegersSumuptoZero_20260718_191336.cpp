// Last updated: 18/07/2026, 19:13:36
1class Solution {
2public:
3    vector<int> sumZero(int n) {
4        vector<int> result;
5        
6        for (int i = 1; i <= n / 2; i++) {
7            result.push_back(i);
8            result.push_back(-i);
9        }
10        
11        if (n % 2 != 0) {
12            result.push_back(0);
13        }
14        
15        return result;
16    }
17};