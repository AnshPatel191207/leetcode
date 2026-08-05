// Last updated: 05/08/2026, 11:13:20
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxRow = 0;
        int maxCount = -1;
        
        for (int i = 0; i < mat.size(); i++) {
            int currentOnes = 0;
            
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    currentOnes++;
                }
            }
            
            if (currentOnes > maxCount) {
                maxCount = currentOnes;
                maxRow = i;
            }
        }
        
        return {maxRow, maxCount};
    }
};