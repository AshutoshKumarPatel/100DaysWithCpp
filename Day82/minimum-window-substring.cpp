#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) return "";
        
        int si = 0, ei = 0, ns = s.length(), nt = t.length(), len = INT_MAX, count = t.length(), gsi = 0;
        vector<int> freq(128, 0);
        for (char ch : t) freq[ch]++;
        while (ei < ns) {
            if (--freq[s[ei++]] >= 0) {
                count--;
            }
            while (count == 0) {
                if (ei - si < len) {
                    len = ei - si;
                    gsi = si;
                }
                if (++freq[s[si++]] > 0) count++;
            }
        }
        return len == INT_MAX ? "" : s.substr(gsi, len);
    }
};

int main() {
    string s = "ADOBECODEBANC", t = "ABC";
    Solution sol;
    cout << sol.minWindow(s, t) << endl;
    return 0;
}