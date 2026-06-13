// Last updated: 13/06/2026, 10:19:06
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> result;
5        
6        for (int i = 0; i < words.size(); i++) {
7            for (int j = 0; j < words[i].size(); j++) {
8                if (words[i][j] == x) {
9                    result.push_back(i);
10                    break;
11                }
12            }
13        }
14        return result;
15    }
16};