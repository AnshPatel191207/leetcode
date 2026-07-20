// Last updated: 20/07/2026, 20:01:31
1class Solution {
2public:
3    int countConsistentStrings(string allowed, vector<string>& words) {
4        int consistentCount = 0;
5        
6        for (int i = 0; i < words.size(); i++) {
7            string word = words[i];
8            bool isConsistent = true;
9            
10            for (int j = 0; j < word.length(); j++) {
11                char w_char = word[j];
12                bool found = false;
13                
14                for (int k = 0; k < allowed.length(); k++) {
15                    if (w_char == allowed[k]) {
16                        found = true;
17                        break;
18                    }
19                }
20                
21                if (!found) {
22                    isConsistent = false;
23                    break;
24                }
25            }
26            
27            if (isConsistent) {
28                consistentCount++;
29            }
30        }
31        
32        return consistentCount;
33    }
34};