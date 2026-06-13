// Last updated: 13/06/2026, 10:47:44
1class Solution {
2public:
3    int maxFreqSum(string s) {
4        int counts[128] = {0};
5        int maxV = 0, maxC = 0;
6        
7        for (int i = 0; i < s.length(); i++) {
8            counts[s[i]]++;
9        }
10        
11        for (int i = 'a'; i <= 'z'; i++) {
12            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
13                if (counts[i] > maxV) maxV = counts[i];
14            } else {
15                if (counts[i] > maxC) maxC = counts[i];
16            }
17        }
18        
19        return maxV + maxC;
20    }
21};