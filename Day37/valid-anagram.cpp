#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1;
        unordered_map<char, int> s2;
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            s1[s[i]]++;
            s2[t[i]]++;
        }
        for (auto c: s){
            if (s1[c] != s2[c]) {
                return false;
            }
        }
        return true;
    }
};

int main () {
    string s1 = "anagram";
    string s2 = "nagaram";
    Solution sol;
    cout << sol.isAnagram(s1, s2) << endl;
    return 0;
}