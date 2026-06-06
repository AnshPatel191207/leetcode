// Last updated: 06/06/2026, 19:46:35
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};