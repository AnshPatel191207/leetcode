// Last updated: 13/06/2026, 23:48:01
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4        int n = cost.size();
5        int first = cost[0];
6        int second = cost[1];
7        
8        if (n == 2) return min(first, second);
9        
10        for (int i = 2; i < n; ++i) {
11            int current = cost[i] + min(first, second);
12            first = second;
13            second = current;
14        }
15        
16        return min(first, second);
17    }
18};