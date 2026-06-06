// Last updated: 06/06/2026, 19:46:26
class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0;
        int l = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                r++;
            } else {
                l++;
            }
            if (r == l) {
                count++;
            }
        }
        return count;
    }
};