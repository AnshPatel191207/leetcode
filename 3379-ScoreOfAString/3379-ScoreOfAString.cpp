// Last updated: 05/08/2026, 11:12:13
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int total_score = 0;
        
        for (int i = 0; i < s.length() - 1; ++i) {
            
            total_score += abs(s[i] - s[i + 1]);
        }
        
        return total_score;
    }
};