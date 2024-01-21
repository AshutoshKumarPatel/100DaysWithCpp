#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPtr = 0;
        int tPtr = 0;
        int isSubsequence = 0;

        while (sPtr < s.length() & tPtr < t.length()) {
            if (s[sPtr] == t[tPtr]) {
                sPtr++;
                isSubsequence++;
            }
            tPtr++;
        }
        return isSubsequence == s.length();
    }
};

int main() {
    string s = "axc";
    string t = "ahbgdc";
    Solution sol;
    cout << sol.isSubsequence(s, t) << endl;
    return 0;
}