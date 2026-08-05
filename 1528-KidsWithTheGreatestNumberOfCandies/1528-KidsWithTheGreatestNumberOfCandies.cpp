// Last updated: 05/08/2026, 11:16:50
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxCandies = 0;
        
        for (int i = 0; i < n; i++) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }
        
        vector<bool> result(n);
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }
        
        return result;
    }
};