// Last updated: 05/08/2026, 11:19:03
class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        for (int r = 0; r <= s.length(); ++r) {
            if (r == s.length() || s[r] == ' ') {
                reverse(s.begin() + l, s.begin() + r);
                l = r + 1;
            }
        }
        return s;
    }
};