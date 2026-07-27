// Last updated: 27/07/2026, 16:14:03
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int sum = 0;
5        for(int i=0; i<=n; i++){
6            if(i%3==0||i%5==0||i%7==0){
7                sum+=i;
8            }
9        }
10        return sum;
11    }
12};