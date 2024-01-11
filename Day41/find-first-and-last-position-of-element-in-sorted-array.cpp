#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> t;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                t.push_back(i);
                cout << i << endl;
            }
        }
        if (t.size() >= 1) {
            return {t[0], t[t.size() - 1]};
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> vals = {1,4};
    int target = 4;
    Solution sol;
    vector<int> ans = sol.searchRange(vals, target);
    for (auto a: ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}