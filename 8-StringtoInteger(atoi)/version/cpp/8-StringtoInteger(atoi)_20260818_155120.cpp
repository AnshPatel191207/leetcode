// Last updated: 18/08/2026, 15:51:20
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0, n = s.size();
5
6        while (i < n && s[i] == ' ') {
7            i++;
8        };
9        
10        int sign = 1;
11        if (i < n && (s[i] == '+' || s[i] == '-')) {
12            if (s[i] == '-')
13                sign = -1;
14            i++;
15        }
16
17        long long num = 0;
18
19        while (i < n && isdigit(s[i])) {
20            num = num * 10 + (s[i] - '0');
21
22            if (sign * num > INT_MAX)
23                return INT_MAX;
24            if (sign * num < INT_MIN)
25                return INT_MIN;
26
27            i++;
28        }
29
30        return sign * num;
31    }
32};