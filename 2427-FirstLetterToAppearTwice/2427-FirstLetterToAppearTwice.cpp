// Last updated: 06/06/2026, 19:46:02
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;
        
        for (int i = 0; i < s.size(); i++) {
            if (st.count(s[i])) {
                return s[i];
            }
            st.insert(s[i]);
        }
        
        return ' ';
    }
};