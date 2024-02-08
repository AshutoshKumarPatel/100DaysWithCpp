#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i+=2) {
            ans += nums[i];
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,4,3,2};
    Solution sol;
    cout << sol.arrayPairSum(nums) << endl;
    return 0;
}