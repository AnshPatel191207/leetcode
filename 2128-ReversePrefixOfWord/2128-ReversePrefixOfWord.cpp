// Last updated: 05/08/2026, 11:14:44
class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                int left = 0, right = i;
                while (left < right) {
                    char temp = word[left];
                    word[left] = word[right];
                    word[right] = temp;
                    left++;
                    right--;
                }
                return word;
            }
        }
        return word;
    }
};