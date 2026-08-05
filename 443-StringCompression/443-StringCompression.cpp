// Last updated: 05/08/2026, 11:19:27
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> temp;
        int n = chars.size();

        for (int i = 0; i < n; ) {
            int j = i;

            for (j = i; j < n && chars[j] == chars[i]; j++) {
                
            }

            temp.push_back(chars[i]);

            int count = j - i;
            if (count > 1) {
                string s = to_string(count);
                for (int k = 0; k < s.length(); k++) {
                    temp.push_back(s[k]);
                }
            }

            i = j;
        }

        chars.clear();
        for (int i = 0; i < temp.size(); i++) {
            chars.push_back(temp[i]);
        }

        return chars.size();
    }
};