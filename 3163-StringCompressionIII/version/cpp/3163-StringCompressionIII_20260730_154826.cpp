// Last updated: 30/07/2026, 15:48:26
1class Solution {
2public:
3    string compressedString(string word) {
4        string comp = "";
5        int n = word.length();
6
7        for (int i = 0; i < n; ) {
8            char curr = word[i];
9            int count = 0;
10
11            for (int j = i; j < n && word[j] == curr && count < 9; j++) {
12                count++;
13            }
14
15            comp += to_string(count);
16            comp += curr;
17
18            i += count;
19        }
20
21        return comp;
22    }
23};