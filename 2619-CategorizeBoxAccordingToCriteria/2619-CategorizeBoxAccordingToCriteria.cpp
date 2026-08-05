// Last updated: 05/08/2026, 11:13:27
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = (long long)length * width * height;
        
        bool isBulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000);
        bool isHeavy = (mass >= 100);
        
        if (isBulky && isHeavy) return "Both";
        if (isBulky) return "Bulky";
        if (isHeavy) return "Heavy";
        
        return "Neither";
    }
};