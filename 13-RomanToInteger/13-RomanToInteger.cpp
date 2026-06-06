// Last updated: 06/06/2026, 19:47:14
class Solution {
public:
    int getRomanValue(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int currentVal = getRomanValue(s[i]);
            if (i + 1 < n && currentVal < getRomanValue(s[i + 1])) {
                total -= currentVal;
            } else {
                total += currentVal;
            }
        }
        return total;
    }
};