#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> nMapping = {{'a','b','c'}, {'d','e','f'}, {'g','h','i'}, {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'}, {'t','u','v'}, {'w','x','y','z'}};
        vector<string> ans;
        for (int i = 0; i < digits.length(); i++) {
            
        }
    }
};

int main() {
    string digits = "23";
    Solution sol;
    vector<string> ans = sol.letterCombinations(digits);
    for (string s : ans) {
        cout << s << " " ;
    }
    cout << endl;
    return 0;
}