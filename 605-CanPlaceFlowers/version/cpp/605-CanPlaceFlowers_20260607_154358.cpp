// Last updated: 07/06/2026, 15:43:58
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4
5        int count = 0;
6
7        for (int i = 0; i < flowerbed.size(); i++) {
8
9            if (flowerbed[i] == 0 &&
10                (i == 0 || flowerbed[i - 1] == 0) &&
11                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
12
13                flowerbed[i] = 1;
14                count++;
15            }
16        }
17
18        return count >= n;
19    }
20};