// Last updated: 06/06/2026, 15:48:40
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int capital = 0;
5        for(int i=0; i<word.size(); i++){
6            if(isupper(word[i])){
7                capital++;
8            }
9        }
10        if(capital == word.size()){
11            return true;
12        }
13        if(capital == 0){
14            return true;
15        }
16        if(capital == 1 && isupper(word[0])){
17            return true;
18        }
19        return false;
20    }
21};