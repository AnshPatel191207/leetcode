// Last updated: 08/07/2026, 19:10:46
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> answer;
5        
6        for (int i = 1; i <= n; ++i) {
7            if (i % 3 == 0 && i % 5 == 0) {
8                answer.push_back("FizzBuzz");
9            } 
10            else if (i % 3 == 0) {
11                answer.push_back("Fizz");
12            } 
13            else if (i % 5 == 0) {
14                answer.push_back("Buzz");
15            } 
16            else {
17                answer.push_back(to_string(i));
18            }
19        }
20        
21        return answer;
22    }
23};