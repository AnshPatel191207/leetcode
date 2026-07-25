// Last updated: 25/07/2026, 11:37:15
1class Solution {
2public:
3    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
4        int totalTime = arrivalTime + delayedTime;
5        if (totalTime >= 24) {
6            return totalTime - 24;
7        }
8        return totalTime;
9    }
10};