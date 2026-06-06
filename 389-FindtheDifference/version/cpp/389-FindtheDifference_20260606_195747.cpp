// Last updated: 06/06/2026, 19:57:47
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char diff = 0;
5
6        for(int i=0; i<t.length(); i++){
7            diff = diff + t[i];
8        }
9
10        for(int j=0; j<s.length(); j++){
11            diff = diff - s[j];
12        }
13
14        return diff;
15    }
16};