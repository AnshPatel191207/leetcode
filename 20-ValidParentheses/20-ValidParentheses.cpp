// Last updated: 06/06/2026, 19:47:12
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == '('){
                st.push(')');
            }
            else if (s[i] == '['){
                st.push(']');
            }
            else if (s[i] == '{'){
                st.push('}');
            }
            else {
                if (st.empty() || st.top() != s[i]){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};