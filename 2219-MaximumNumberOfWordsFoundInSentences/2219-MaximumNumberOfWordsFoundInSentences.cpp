// Last updated: 05/08/2026, 11:14:39
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        
        for (int i = 0; i < sentences.size(); i++) {
            string currentSentence = sentences[i];
            int spaces = 0;
            
            for (int j = 0; j < currentSentence.length(); j++) {
                if (currentSentence[j] == ' ') {
                    spaces++;
                }
            }
            
            int currentWordCount = spaces + 1;
            
            if (currentWordCount > maxWords) {
                maxWords = currentWordCount;
            }
        }
        
        return maxWords;
    }
};