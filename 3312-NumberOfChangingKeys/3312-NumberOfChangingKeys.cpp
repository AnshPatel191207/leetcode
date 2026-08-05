// Last updated: 05/08/2026, 11:12:25
class Solution {
public:
    int countKeyChanges(string s) {
        int changes = 0;

        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                changes++;
            }
        }

        return changes;
    }
};