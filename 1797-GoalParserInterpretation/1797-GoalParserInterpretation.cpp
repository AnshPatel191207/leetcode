// Last updated: 06/06/2026, 19:46:19
class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                ans = ans + 'G';
            } else if (command[i] == '(' && command[i + 1] == ')') {
                ans = ans + "o";
                i++;
            } else {
                ans = ans + "al";
                i = i + 3;
            }
        }
        return ans;
    }
};