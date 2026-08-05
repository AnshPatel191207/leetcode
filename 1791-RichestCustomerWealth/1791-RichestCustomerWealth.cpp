// Last updated: 05/08/2026, 11:15:54
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int currentCustomerWealth = 0;
            
            for (int j = 0; j < accounts[i].size(); j++) {
                currentCustomerWealth += accounts[i][j];
            }
            
            if (currentCustomerWealth > maxWealth) {
                maxWealth = currentCustomerWealth;
            }
        }
        
        return maxWealth;
    }
};