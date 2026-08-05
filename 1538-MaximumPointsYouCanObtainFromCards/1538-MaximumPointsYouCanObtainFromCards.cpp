// Last updated: 05/08/2026, 11:16:43
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int currentSum = 0;

        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[i];
        }

        int maxPoints = currentSum;

        for (int i = 0; i < k; i++) {
            currentSum -= cardPoints[k - 1 - i];
            currentSum += cardPoints[n - 1 - i];
            maxPoints = max(maxPoints, currentSum);
        }

        return maxPoints;
    }
};