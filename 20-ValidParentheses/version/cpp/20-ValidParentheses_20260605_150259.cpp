// Last updated: 05/06/2026, 15:02:59
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        
6        for (int i = 0; i < s.length(); i++) {
7            
8            if (s[i] == '('){
9                st.push(')');
10            }
11            else if (s[i] == '['){
12                st.push(']');
13            }
14            else if (s[i] == '{'){
15                st.push('}');
16            }
17            else {
18                if (st.empty() || st.top() != s[i]){
19                    return false;
20                }
21                st.pop();
22            }
23        }
24        return st.empty();
25    }
26};