// Last updated: 06/06/2026, 19:46:14
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;

        for (int i = 0; i < sentence.size(); i++) {
            st.insert(sentence[i]);
        }

        return st.size() == 26;
    }
};