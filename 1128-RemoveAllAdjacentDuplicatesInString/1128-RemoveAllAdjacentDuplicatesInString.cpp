// Last updated: 06/06/2026, 19:46:29
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = ""; // empty(unique)
        for (char ch : s) {
            if (!ans.empty() && ans.back() == ch) {
                ans.pop_back();
            } else {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};