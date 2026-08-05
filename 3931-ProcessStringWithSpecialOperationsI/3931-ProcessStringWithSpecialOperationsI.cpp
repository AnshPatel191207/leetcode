// Last updated: 05/08/2026, 11:11:11
#include <algorithm>

class Solution {
public:
    string processStr(string s) {
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            if (ch == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } 
            else if (ch == '#') {
                result += result;
            } 
            else if (ch == '%') {
                reverse(result.begin(), result.end());
            } 
            else {
                result.push_back(ch);
            }
        }
        
        return result;
    }
};