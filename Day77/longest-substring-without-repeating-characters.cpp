#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> cCount;
        int maxSubStr = 0;
        int itr = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (cCount.count(s[i]) != 0) {
                itr = max(itr, cCount[s[i]]);
            }
            maxSubStr = max(maxSubStr, i - itr + 1);
            cCount[s[i]] = i + 1;
        }
        return maxSubStr;
    }
};

int main() {
    string s = "abba";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}
