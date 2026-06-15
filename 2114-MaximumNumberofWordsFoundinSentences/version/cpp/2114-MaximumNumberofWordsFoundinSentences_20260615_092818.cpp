// Last updated: 15/06/2026, 09:28:18
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords = 0;
5        
6        for (int i = 0; i < sentences.size(); i++) {
7            string currentSentence = sentences[i];
8            int spaces = 0;
9            
10            for (int j = 0; j < currentSentence.length(); j++) {
11                if (currentSentence[j] == ' ') {
12                    spaces++;
13                }
14            }
15            
16            int currentWordCount = spaces + 1;
17            
18            if (currentWordCount > maxWords) {
19                maxWords = currentWordCount;
20            }
21        }
22        
23        return maxWords;
24    }
25};