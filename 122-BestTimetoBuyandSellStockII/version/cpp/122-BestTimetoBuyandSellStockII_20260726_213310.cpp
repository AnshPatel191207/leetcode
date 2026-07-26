// Last updated: 26/07/2026, 21:33:10
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int totalProfit = 0;
5        
6        for (int i = 1; i < prices.size(); ++i) {
7            if (prices[i] > prices[i - 1]) {
8                totalProfit += prices[i] - prices[i - 1];
9            }
10        }
11        
12        return totalProfit;
13    }
14};