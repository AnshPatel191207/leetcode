// Last updated: 05/08/2026, 11:12:12
class Solution {
public:
    int minimumChairs(string s) {
        int maxChairs = 0;
        int currentChairs = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'E') {
                currentChairs++;
                if (currentChairs > maxChairs) {
                    maxChairs = currentChairs;
                }
            } else if (s[i] == 'L') {
                currentChairs--;
            }
        }

        return maxChairs;
    }
};