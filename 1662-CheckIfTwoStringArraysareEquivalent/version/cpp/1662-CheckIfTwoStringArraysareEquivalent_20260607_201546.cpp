// Last updated: 07/06/2026, 20:15:46
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4        string s1 = "";
5        string s2 = "";
6        
7        for (int i = 0; i < word1.size(); i++) {
8            s1 = s1 + word1[i];
9        }
10        
11        for (int j = 0; j < word2.size(); j++) {
12            s2 = s2 + word2[j];
13        }
14        
15        return s1 == s2;
16    }
17};