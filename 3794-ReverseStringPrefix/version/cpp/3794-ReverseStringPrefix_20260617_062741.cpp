// Last updated: 17/06/2026, 06:27:41
1class Solution {
2public:
3    string reversePrefix(string s, int k) {
4        
5        int left = 0;
6        int right = k - 1;
7        
8        while (left < right) {
9            
10            char temp = s[left];
11            s[left] = s[right];
12            s[right] = temp;
13            
14            left++;
15            right--;
16        }
17        
18        return s;
19    }
20};