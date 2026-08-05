// Last updated: 05/08/2026, 11:13:10
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int totalTime = arrivalTime + delayedTime;
        if (totalTime >= 24) {
            return totalTime - 24;
        }
        return totalTime;
    }
};