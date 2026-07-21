// Last updated: 21/07/2026, 15:19:06
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int targetSum = k * threshold;
5        int currentSum = 0;
6        int count = 0;
7
8        for (int i = 0; i < k; ++i) {
9            currentSum += arr[i];
10        }
11
12        if (currentSum >= targetSum) {
13            count++;
14        }
15
16        for (size_t i = k; i < arr.size(); ++i) {
17            currentSum += arr[i] - arr[i - k];
18            if (currentSum >= targetSum) {
19                count++;
20            }
21        }
22
23        return count;
24    }
25};