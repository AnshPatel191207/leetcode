// Last updated: 05/08/2026, 11:11:36
class Solution {
public:
    int reverseDegree(string s) {
        int totalDegree = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int revAlphabetIndex = 26 - (s[i] - 'a');
            
            int stringIndex = i + 1;
            
            totalDegree += revAlphabetIndex * stringIndex;
        }
        
        return totalDegree;
    }
};