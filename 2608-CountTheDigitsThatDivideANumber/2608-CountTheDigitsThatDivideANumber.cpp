// Last updated: 06/06/2026, 19:45:56
class Solution {
public:
    int countDigits(int num) {
        int count = 0;

        int org = num;

        while (num > 0) {
            int rem = num % 10;

            if (org % rem == 0) {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};