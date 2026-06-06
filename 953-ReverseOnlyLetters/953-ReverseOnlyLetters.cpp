// Last updated: 06/06/2026, 19:46:30
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                temp += s[i];
            }
        }
        int j = temp.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] = temp[j];
                j--;
            }
        }
        return s;
    }
};