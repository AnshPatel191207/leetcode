// Last updated: 05/08/2026, 11:18:14
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string resS = "";
        string resT = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                if (!resS.empty()) {
                    resS.pop_back();
                }
            } else {
                resS.push_back(s[i]);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#') {
                if (!resT.empty()) {
                    resT.pop_back();
                }
            } else {
                resT.push_back(t[i]);
            }
        }

        return resS == resT;
    }
};