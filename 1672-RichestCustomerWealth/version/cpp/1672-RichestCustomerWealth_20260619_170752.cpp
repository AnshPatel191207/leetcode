// Last updated: 19/06/2026, 17:07:52
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int maxWealth = 0;
5
6        for (int i = 0; i < accounts.size(); i++) {
7            int currentCustomerWealth = 0;
8            
9            for (int j = 0; j < accounts[i].size(); j++) {
10                currentCustomerWealth += accounts[i][j];
11            }
12            
13            if (currentCustomerWealth > maxWealth) {
14                maxWealth = currentCustomerWealth;
15            }
16        }
17        
18        return maxWealth;
19    }
20};