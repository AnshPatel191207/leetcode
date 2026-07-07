// Last updated: 07/07/2026, 11:07:26
1class Solution {
2public:
3    int minPartitions(string n) {
4        char max_digit = '0';
5
6        for (int i = 0; i < n.length(); i++) {
7            if (n[i] > max_digit) {
8                max_digit = n[i];
9            }
10            if (max_digit == '9') {
11                break;
12            }
13        }
14
15        return max_digit - '0';
16    }
17};