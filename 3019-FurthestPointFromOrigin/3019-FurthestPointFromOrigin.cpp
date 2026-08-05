// Last updated: 05/08/2026, 11:12:50
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;

        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'L') {
                left++;
            } else if (moves[i] == 'R') {
                right++;
            } else if (moves[i] == '_') {
                blank++;
            }
        }

        return abs(left - right) + blank;
    }
};