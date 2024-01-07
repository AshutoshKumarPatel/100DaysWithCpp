#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> intCount;
        for (auto num: nums) {
            intCount[num]++;
            if (intCount[num] > 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> vals = {1,1,1,3,3,4,3,2,4,2};
    Solution sol;
    bool ans = sol.containsDuplicate(vals);
    cout << ans << endl;
    return 0;
}