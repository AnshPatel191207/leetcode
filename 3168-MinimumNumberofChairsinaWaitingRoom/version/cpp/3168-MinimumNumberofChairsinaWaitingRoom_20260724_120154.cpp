// Last updated: 24/07/2026, 12:01:54
1class Solution {
2public:
3    int minimumChairs(string s) {
4        int maxChairs = 0;
5        int currentChairs = 0;
6
7        for (int i = 0; i < s.length(); i++) {
8            if (s[i] == 'E') {
9                currentChairs++;
10                if (currentChairs > maxChairs) {
11                    maxChairs = currentChairs;
12                }
13            } else if (s[i] == 'L') {
14                currentChairs--;
15            }
16        }
17
18        return maxChairs;
19    }
20};