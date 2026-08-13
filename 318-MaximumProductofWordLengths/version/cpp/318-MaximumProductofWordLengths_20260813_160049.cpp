// Last updated: 13/08/2026, 16:00:49
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    int maxProduct(vector<string>& words) {
7        int product = 0;
8        int n = words.size();
9
10        vector<int> mask(26 * n, 0);
11
12        for (int i = 0; i < n; i++) {
13            for (int k = 0; k < words[i].size(); k++) {
14                mask[(26 * i) + (words[i][k] - 'a')]++;
15            }
16        }
17
18        for (int i = 0; i < n; i++) {
19            for (int j = i + 1; j < n; j++) {
20
21                bool common = false;
22
23                for (int k = 0; k < 26; k++) {
24                    if (mask[(26 * i) + k] && mask[(26 * j) + k]) {
25                        common = true;
26                        break;
27                    }
28                }
29
30                if (!common) {
31                    int curr = words[i].size() * words[j].size();
32                    product = max(product, curr);
33                }
34            }
35        }
36
37        return product;
38    }
39};