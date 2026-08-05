// Last updated: 05/08/2026, 11:17:02
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int targetSum = k * threshold;
        int currentSum = 0;
        int count = 0;

        for (int i = 0; i < k; ++i) {
            currentSum += arr[i];
        }

        if (currentSum >= targetSum) {
            count++;
        }

        for (size_t i = k; i < arr.size(); ++i) {
            currentSum += arr[i] - arr[i - k];
            if (currentSum >= targetSum) {
                count++;
            }
        }

        return count;
    }
};