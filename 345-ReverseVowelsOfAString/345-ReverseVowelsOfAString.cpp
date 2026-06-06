// Last updated: 06/06/2026, 19:46:46
class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        string temp = "";
        
        for (char c : s) {
            if (isVowel(c)) {
                temp += c;
            }
        }

        int j = temp.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = temp[j];
                j--;
            }
        }

        return s;
    }
};