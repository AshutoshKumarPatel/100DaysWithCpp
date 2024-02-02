#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> sortedStrs;
        vector<vector<string>> ans;
        vector<string> sorted;
        for (string s : strs) {
            string srt = s;
            sort(srt.begin(), srt.end());
            sorted.push_back(srt);
        }

        set<string> uSet (sorted.begin(), sorted.end());
        vector<string> nSorted (uSet.begin(), uSet.end());

        for (int i = 0 ; i < sorted.size(); i++) {
            sortedStrs[sorted[i]].push_back(i);
        }

        for (string s : nSorted) {
            vector<string> mans;
            for (int j : sortedStrs[s]) {
                mans.push_back(strs[j]);
            }
            ans.push_back(mans);
        }
        return ans;
    }
};

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution sol;
    vector<vector<string>> ans = sol.groupAnagrams(strs);
    for (vector<string> vc : ans) {
        cout << "[";
        for (string s : vc) {
            cout << s << " ";
        }
        cout << "], ";
    }
    cout << endl;
    return 0;
}