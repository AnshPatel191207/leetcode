// Last updated: 13/06/2026, 14:55:52
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        for (int i = 0; i < word.length(); i++) {
5            if (word[i] == ch) {
6                int left = 0, right = i;
7                while (left < right) {
8                    char temp = word[left];
9                    word[left] = word[right];
10                    word[right] = temp;
11                    left++;
12                    right--;
13                }
14                return word;
15            }
16        }
17        return word;
18    }
19};