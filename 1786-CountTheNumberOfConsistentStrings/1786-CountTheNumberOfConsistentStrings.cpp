// Last updated: 05/08/2026, 11:15:57
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int consistentCount = 0;
        
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            bool isConsistent = true;
            
            for (int j = 0; j < word.length(); j++) {
                char w_char = word[j];
                bool found = false;
                
                for (int k = 0; k < allowed.length(); k++) {
                    if (w_char == allowed[k]) {
                        found = true;
                        break;
                    }
                }
                
                if (!found) {
                    isConsistent = false;
                    break;
                }
            }
            
            if (isConsistent) {
                consistentCount++;
            }
        }
        
        return consistentCount;
    }
};