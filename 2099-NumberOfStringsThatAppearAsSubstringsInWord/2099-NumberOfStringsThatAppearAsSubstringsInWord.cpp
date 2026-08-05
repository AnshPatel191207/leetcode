// Last updated: 05/08/2026, 11:15:04
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        
        for (int i = 0; i < patterns.size(); i++) {
            
            if (word.contains(patterns[i])) {
                count++;
            }
        }
        
        return count;
    }
};