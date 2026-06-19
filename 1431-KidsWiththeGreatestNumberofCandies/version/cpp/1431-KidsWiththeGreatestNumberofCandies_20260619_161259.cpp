// Last updated: 19/06/2026, 16:12:59
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int n = candies.size();
5        int maxCandies = 0;
6        
7        for (int i = 0; i < n; i++) {
8            if (candies[i] > maxCandies) {
9                maxCandies = candies[i];
10            }
11        }
12        
13        vector<bool> result(n);
14        for (int i = 0; i < n; i++) {
15            if (candies[i] + extraCandies >= maxCandies) {
16                result[i] = true;
17            } else {
18                result[i] = false;
19            }
20        }
21        
22        return result;
23    }
24};