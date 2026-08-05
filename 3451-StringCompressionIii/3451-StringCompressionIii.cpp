// Last updated: 05/08/2026, 11:12:09
class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.length();

        for (int i = 0; i < n; ) {
            char curr = word[i];
            int count = 0;

            for (int j = i; j < n && word[j] == curr && count < 9; j++) {
                count++;
            }

            comp += to_string(count);
            comp += curr;

            i += count;
        }

        return comp;
    }
};