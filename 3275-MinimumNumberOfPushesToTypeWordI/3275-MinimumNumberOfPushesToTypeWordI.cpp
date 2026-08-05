// Last updated: 05/08/2026, 11:12:28
class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int pushes = 0;

        for (int i = 0; i < n; i++) {
            pushes += (i / 8) + 1;
        }

        return pushes;
    }
};