// Last updated: 18/07/2026, 19:21:53
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int min_price = INT_MAX;
5        int max_profit = 0;
6        
7        for (int i = 0; i < prices.size(); i++) {
8            if (prices[i] < min_price) {
9                min_price = prices[i];
10            }
11            else if (prices[i] - min_price > max_profit) {
12                max_profit = prices[i] - min_price;
13            }
14        }
15        return max_profit;
16    }
17};