// Last updated: 06/06/2026, 19:46:39
class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for(int i=0; i<word.size(); i++){
            if(isupper(word[i])){
                capital++;
            }
        }
        if(capital == word.size()){
            return true;
        }
        if(capital == 0){
            return true;
        }
        if(capital == 1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};