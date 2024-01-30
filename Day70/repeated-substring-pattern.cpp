#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string bStr = s + s;
        return bStr.substr(1, bStr.length() - 2).find(s) != -1;
    }
};

int main() {
    string s = "abcabcabcabc";
    Solution sol;
    cout << sol.repeatedSubstringPattern(s) << endl;
    return 0;
}