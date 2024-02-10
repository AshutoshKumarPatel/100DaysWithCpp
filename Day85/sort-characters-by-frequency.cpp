#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> cCount;
        string ans = "";

        for (char c : s) {
            cCount[c]++;
        }

        vector<pair<char, int>> vPair(cCount.begin(), cCount.end());

        sort(vPair.begin(), vPair.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });

        for (const auto& pair : vPair) {
            ans.append(pair.second, pair.first);
        }

        return ans;
    }
};

int main() {
    string s = "tree";
    Solution sol;
    cout << sol.frequencySort(s) << endl;
    return 0;
}
