// Last updated: 09/06/2026, 14:58:19
1#include <vector>
2using namespace std;
3class Solution {
4public:
5    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
6        vector<int> result;
7        for (int i = 0; i < order.size(); i++) {
8            for (int j = 0; j < friends.size(); j++) {
9                if (order[i] == friends[j]) {
10                    result.push_back(order[i]);
11                    break;
12                }
13            }
14        }
15        return result;
16    }
17};