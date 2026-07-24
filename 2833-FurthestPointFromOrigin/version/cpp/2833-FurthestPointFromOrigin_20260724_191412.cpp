// Last updated: 24/07/2026, 19:14:12
1class Solution {
2public:
3    int furthestDistanceFromOrigin(string moves) {
4        int left = 0;
5        int right = 0;
6        int blank = 0;
7
8        for (int i = 0; i < moves.length(); i++) {
9            if (moves[i] == 'L') {
10                left++;
11            } else if (moves[i] == 'R') {
12                right++;
13            } else if (moves[i] == '_') {
14                blank++;
15            }
16        }
17
18        return abs(left - right) + blank;
19    }
20};