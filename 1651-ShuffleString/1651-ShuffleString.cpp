// Last updated: 05/08/2026, 11:16:18
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string shuffled = s; 
        
        for (int i = 0; i < n; i++) {
            shuffled[indices[i]] = s[i];
        }
        
        return shuffled;
    }
};