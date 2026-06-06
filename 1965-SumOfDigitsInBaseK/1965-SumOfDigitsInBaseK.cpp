// Last updated: 06/06/2026, 19:46:12
class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        while (n>0) {
            sum = sum + n%k;
            n=n/k;
        }
        return sum;
    }
};