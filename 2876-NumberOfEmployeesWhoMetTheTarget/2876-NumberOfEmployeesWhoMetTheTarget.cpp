// Last updated: 05/08/2026, 11:13:02
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                count++;
            }
        }
        
        return count;
    }
};