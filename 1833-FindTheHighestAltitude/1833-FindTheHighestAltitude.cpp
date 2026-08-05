// Last updated: 05/08/2026, 11:15:44
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int current_altitude = 0;
        
        for (int i = 0; i < gain.size(); i++) {
            current_altitude += gain[i];
            if (current_altitude > max_altitude) {
                max_altitude = current_altitude;
            }
        }
        
        return max_altitude;
    }
};