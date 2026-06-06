// Last updated: 06/06/2026, 19:46:11
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="X++"||operations[i]=="++X"){
                x=x+1;
            }
            else{
                x=x-1;
            }
        }
        return x;
    }
};