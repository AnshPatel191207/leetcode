// Last updated: 06/06/2026, 19:46:42
class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }

    string decode(string& s, int& i) {
        string result = "";
        int k = 0;

        while (i < s.size()) {
            if (isdigit(s[i])) {
                k = k * 10 + (s[i] - '0');
                i++;
            } else if (s[i] == '[') {
                i++; // skip '['
                string decodedPart = decode(s, i);

                while (k--) {
                    result += decodedPart;
                }
                k = 0;
            } else if (s[i] == ']') {
                i++; // skip ']'
                return result;
            } else {
                result += s[i];
                i++;
            }
        }
        return result;
    }
};