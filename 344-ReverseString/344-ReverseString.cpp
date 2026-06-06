// Last updated: 06/06/2026, 19:46:48
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp;
        for (int i = s.size() - 1; i >= 0; i--) {
            temp.push_back(s[i]);
        }
        s = temp;
    }
};