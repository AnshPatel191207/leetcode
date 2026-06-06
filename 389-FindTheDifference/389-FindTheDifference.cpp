// Last updated: 06/06/2026, 19:46:43
class Solution {
public:
    char findTheDifference(string s, string t) {
        char diff = 0;
        
        for (int i = 0; i < t.length(); i++) {
            diff += t[i];
        }
        
        for (int i = 0; i < s.length(); i++) {
            diff -= s[i];
        }
        
        return diff; 
    }
};