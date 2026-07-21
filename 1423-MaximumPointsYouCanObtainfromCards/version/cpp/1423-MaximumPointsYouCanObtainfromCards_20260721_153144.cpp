// Last updated: 21/07/2026, 15:31:44
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n = cardPoints.size();
5        int currentSum = 0;
6
7        for (int i = 0; i < k; i++) {
8            currentSum += cardPoints[i];
9        }
10
11        int maxPoints = currentSum;
12
13        for (int i = 0; i < k; i++) {
14            currentSum -= cardPoints[k - 1 - i];
15            currentSum += cardPoints[n - 1 - i];
16            maxPoints = max(maxPoints, currentSum);
17        }
18
19        return maxPoints;
20    }
21};