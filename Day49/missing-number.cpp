#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i+1] - 1) {
                return nums[i+1] - 1;
            }
        }
        if (nums[nums.size() - 1] + 1 <= nums.size()) {
            return nums[nums.size() - 1] + 1;
        }
        return 0;
    }
};

int main() {
    vector<int> vals = {9,6,4,2,3,5,7,0,1};
    Solution sol;
    cout << sol.missingNumber(vals) << endl;
    return 0;
}