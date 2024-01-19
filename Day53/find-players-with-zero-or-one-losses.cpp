#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int>pScore;
        for (int i = 0; i < matches.size(); i++) {
            pScore[matches[i][0]] = 0;
            pScore[matches[i][1]] = 0;
        }

        for (int i = 0; i < matches.size(); i++) {
            pScore[matches[i][1]]++;
        }

        vector<int> winner, losser;
        for (auto p : pScore) {
            if (p.second == 0) {winner.push_back(p.first);}
            if (p.second == 1) {losser.push_back(p.first);}
        }

        sort(winner.begin(), winner.end());
        sort(losser.begin(), losser.end());
        return {winner, losser};
    }
};

int main() {
    vector<vector<int>> vals = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    Solution sol;
    vector<vector<int>> ans = sol.findWinners(vals);
    for (auto an : ans) {
        for (auto a : an) {
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}