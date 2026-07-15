// Last updated: 15/07/2026, 19:49:48
1class Solution {
2public:
3    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
4        int count = 0;
5        int n = arr.size();
6        
7        for (int i = 0; i < n - 2; i++) {
8            
9            for (int j = i + 1; j < n - 1; j++) {
10                
11                for (int k = j + 1; k < n; k++) {
12                    
13                    if (abs(arr[i] - arr[j]) <= a && 
14                        abs(arr[j] - arr[k]) <= b && 
15                        abs(arr[i] - arr[k]) <= c) {
16                        
17                        count++;
18                    }
19                }
20            }
21        }
22        
23        return count;
24    }
25};