#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount = count_if(word.begin(), word.end(), ::isupper);
        return capCount == 0 || capCount == word.length() || (word[0] < 'a' && capCount == 1);
    }
};

int main() {
    string word = "Leetcode";
    Solution sol;
    cout << sol.detectCapitalUse(word) << endl;
    return 0;
}
