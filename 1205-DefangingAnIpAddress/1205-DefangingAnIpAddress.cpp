// Last updated: 06/06/2026, 19:46:28
class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for(int i=0; i<address.length(); i++){
            if(address[i]=='.'){
                result += "[.]";
            }
            else{
                result += address[i];
            }
        }
        return result;
    }
};