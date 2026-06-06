// Last updated: 06/06/2026, 19:47:16
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        for (int i = 0; i < s.length(); i++) {
            vector<bool> visited(128, false);
            for (int j = i; j < s.length(); j++) {
                if (visited[s[j]]==true) {
                    break;
                }
                visited[s[j]] = true;
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};