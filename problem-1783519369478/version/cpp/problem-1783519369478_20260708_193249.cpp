// Last updated: 08/07/2026, 19:32:49
1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4        long long volume = (long long)length * width * height;
5        
6        bool isBulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000);
7        bool isHeavy = (mass >= 100);
8        
9        if (isBulky && isHeavy) return "Both";
10        if (isBulky) return "Bulky";
11        if (isHeavy) return "Heavy";
12        
13        return "Neither";
14    }
15};