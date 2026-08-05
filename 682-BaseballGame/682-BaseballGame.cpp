// Last updated: 05/08/2026, 11:18:42
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int lastValue = record.back();
                int secondLastValue = record[record.size() - 2];
                int newScore = lastValue + secondLastValue;
                record.push_back(newScore);
            } else if (operations[i] == "D") {
                int newScore = 2 * record.back();
                record.push_back(newScore);
            } else if (operations[i] == "C") {
                record.pop_back();
            } else {
                record.push_back(stoi(operations[i]));
            }
        }

        int totalSum = 0;
        for (int i = 0; i < record.size(); i++) {
            totalSum += record[i];
        }

        return totalSum;
    }
};