// Last updated: 05/08/2026, 11:14:29
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalBeams = 0;
        int prevCount = 0;

        for (int i = 0; i < bank.size(); i++) {
            int currCount = 0;
            
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') {
                    currCount++;
                }
            }

            if (currCount > 0) {
                totalBeams += prevCount * currCount;
                prevCount = currCount;
            }
        }

        return totalBeams;
    }
};