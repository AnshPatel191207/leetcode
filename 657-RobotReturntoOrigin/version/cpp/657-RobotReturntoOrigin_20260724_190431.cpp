// Last updated: 24/07/2026, 19:04:31
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0;
5        int y = 0;
6
7        for (int i = 0; i < moves.length(); i++) {
8            if (moves[i] == 'U') {
9                y++;
10            } else if (moves[i] == 'D') {
11                y--;
12            } else if (moves[i] == 'R') {
13                x++;
14            } else if (moves[i] == 'L') {
15                x--;
16            }
17        }
18
19        return x == 0 && y == 0;
20    }
21};