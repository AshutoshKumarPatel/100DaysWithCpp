#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int ctr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ctr++;
                maxOnes = max(maxOnes, ctr);
            }
            else {
                ctr = 0;
            }
        }
        return maxOnes;
    }
};

int main() {
    vector<int> nums = {1,1,0,1,1,1};
    Solution sol;
    cout << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}