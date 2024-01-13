#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (i > maxReach) {return false;}
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= n - 1) {return true;}
        }
        return false;
    }
};

int main() {
    vector<int> vals = {2,3,1,1,4};
    // vector<int> vals = {3,2,1,0,4};
    Solution sol;
    cout << sol.canJump(vals) << endl;
    return 0;
}