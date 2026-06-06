// Last updated: 06/06/2026, 19:46:08
class Solution {
public:
    bool checkString(string s) {
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='b'&&s[i+1]=='a'){
                return false;
            }
        }
        return true;
    }
};