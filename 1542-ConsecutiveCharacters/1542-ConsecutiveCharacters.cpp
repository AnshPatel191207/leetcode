// Last updated: 05/08/2026, 11:16:42
class Solution {
public:
    int maxPower(string s) {
        int maxLen = 1;
        int currentLen = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currentLen++;
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                }
            } else {
                currentLen = 1;
            }
        }

        return maxLen;
    }
};