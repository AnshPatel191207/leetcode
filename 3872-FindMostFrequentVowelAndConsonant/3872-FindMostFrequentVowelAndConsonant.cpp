// Last updated: 05/08/2026, 11:11:23
class Solution {
public:
    int maxFreqSum(string s) {
        int counts[128] = {0};
        int maxV = 0, maxC = 0;
        
        for (int i = 0; i < s.length(); i++) {
            counts[s[i]]++;
        }
        
        for (int i = 'a'; i <= 'z'; i++) {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
                if (counts[i] > maxV) maxV = counts[i];
            } else {
                if (counts[i] > maxC) maxC = counts[i];
            }
        }
        
        return maxV + maxC;
    }
};