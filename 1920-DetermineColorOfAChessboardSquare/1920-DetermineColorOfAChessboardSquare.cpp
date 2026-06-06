// Last updated: 06/06/2026, 19:46:16
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum = coordinates[0] + coordinates[1];
        return sum%2!=0;
    }
};