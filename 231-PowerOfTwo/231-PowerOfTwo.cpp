// Last updated: 06/06/2026, 19:46:59
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n=n/2;
        }
        return n==1;
    }
};