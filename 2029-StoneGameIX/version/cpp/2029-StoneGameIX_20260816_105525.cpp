// Last updated: 16/08/2026, 10:55:25
1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        int c0 = 0, c1 = 0, c2 = 0;
5
6        for (int i = 0; i < stones.size(); i++) {
7            if (stones[i] % 3 == 0)
8                c0++;
9            else if (stones[i] % 3 == 1)
10                c1++;
11            else
12                c2++;
13        }
14
15        if (c0 % 2 == 0) {
16            return c1 > 0 && c2 > 0;
17        }
18
19        return abs(c1 - c2) > 2;
20    }
21};