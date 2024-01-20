#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        unordered_set<char> vChar = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while (left < right) {
            if (vChar.count(s[left]) && vChar.count(s[right])) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if (vChar.count(s[left])) {right--;}
            else {left++;}
        }
        return s;
    }
};

int main() {
    string val = "leetcode";
    Solution sol;
    cout << sol.reverseVowels(val) << endl;
    return 0;
}