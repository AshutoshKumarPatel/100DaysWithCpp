#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        for (int i = 0; i < haystack.size(); i++) {
            if (needle[0] == haystack[i]) {
                if (haystack.substr(i, needle.size()) == needle) {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    string haystack = "leetcode";
    string needle = "let";

    cout << solution.strStr(haystack, needle);
}