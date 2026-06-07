// Last updated: 07/06/2026, 09:42:01
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int evenSum = 0;
5        int oddSum = 0;
6        
7        for (int i = 0; i < num.length(); i++) {
8            int digit = num[i] - '0';
9            
10            if (i % 2 == 0) {
11                evenSum = evenSum + digit;
12            } else {
13                oddSum = oddSum + digit;
14            }
15        }
16        
17        return evenSum == oddSum;
18    }
19};