// Last updated: 05/08/2026, 11:11:44
class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1; // 1 choice represents the full unmodified string itself
        
        for (int i = 1; i < word.length(); i++) {
            // Whenever two adjacent characters match, an extra original string is possible
            if (word[i] == word[i - 1]) {
                count++;
            }
        }
        
        return count;
    }
};