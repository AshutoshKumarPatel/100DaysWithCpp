#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        replace_if(s.begin(), s.end(), ::ispunct, ' ');
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        if (s == "") {return true;}
        int lenS = s.length();
        for (int i = 0; i < lenS/2 + 1; i++) {
            if (tolower(s[i]) != tolower(s[lenS - i - 1])) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    bool ans = solution.isPalindrome("A man, a plan, a canal: Panaa");
    cout << ans << endl;
    return 0;
}
