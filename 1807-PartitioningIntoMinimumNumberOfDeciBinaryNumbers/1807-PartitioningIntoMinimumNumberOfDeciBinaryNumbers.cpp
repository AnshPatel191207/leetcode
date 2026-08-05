// Last updated: 05/08/2026, 11:15:49
class Solution {
public:
    int minPartitions(string n) {
        char max_digit = '0';

        for (int i = 0; i < n.length(); i++) {
            if (n[i] > max_digit) {
                max_digit = n[i];
            }
            if (max_digit == '9') {
                break;
            }
        }

        return max_digit - '0';
    }
};