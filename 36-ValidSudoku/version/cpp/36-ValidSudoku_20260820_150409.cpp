// Last updated: 20/08/2026, 15:04:09
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        bool rows[9][9] = {false};
5        bool cols[9][9] = {false};
6        bool boxes[9][9] = {false};
7
8        for (int r = 0; r < 9; ++r) {
9            for (int c = 0; c < 9; ++c) {
10                if (board[r][c] == '.') {
11                    continue;
12                }
13
14                int num = board[r][c] - '1';
15                int boxIndex = (r / 3) * 3 + (c / 3);
16
17                if (rows[r][num] || cols[c][num] || boxes[boxIndex][num]) {
18                    return false;
19                }
20
21                rows[r][num] = true;
22                cols[c][num] = true;
23                boxes[boxIndex][num] = true;
24            }
25        }
26
27        return true;
28    }
29};