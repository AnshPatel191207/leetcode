// Last updated: 26/07/2026, 22:27:34
1#include <string>
2
3class Solution {
4public:
5    string intToRoman(int num) {
6        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
7        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
8        
9        string result = "";
10        
11        for (int i = 0; i < 13; i++) {
12            while (num >= values[i]) {
13                result += symbols[i];
14                num -= values[i];
15            }
16        }
17        
18        return result;
19    }
20};