// Last updated: 05/08/2026, 11:17:43
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int opened = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (opened > 0) {
                    result += s[i];
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    result += s[i];
                }
            }
        }
        return result;
    }
};