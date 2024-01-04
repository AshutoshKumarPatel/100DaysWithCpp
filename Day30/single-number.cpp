#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> vals;
        if (nums.size() == 1) {
            return nums[0];
        }

        for (int i = 0; i < nums.size(); i++) {
            auto it = find(vals.begin(), vals.end(), nums[i]);
            if (it == vals.end()) {
                vals.push_back(nums[i]);
            }
            else{
                vals.erase(it);
            }
        }
        return vals[0];
    }
};

int main() {
    vector<int> arr = {4,1,2,1,2};
    // vector<int> arr = {2,2,1};
    // vector<int> arr = {1};
    Solution solution;
    int ans = solution.singleNumber(arr);
    cout << ans << endl;
    return 0;
}