// Last updated: 14/06/2026, 23:35:23
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        long long reversedN = 0;
5        int originalN = n;
6        
7        while (n > 0) {
8            int lastDigit = n % 10;
9            reversedN = (reversedN * 10) + lastDigit;
10            n /= 10;
11        }
12        
13        long long difference = originalN - reversedN;
14        if (difference < 0) {
15            difference = -difference;
16        }
17        
18        return difference;
19    }
20};