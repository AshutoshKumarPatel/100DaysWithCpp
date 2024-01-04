#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;

        for (size_t i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                candidate = nums[i];
            }
            count += (nums[i] == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

int main() {
    vector<int> vals = {2,2,1,1,1,2,2};
    Solution solution;
    int ans = solution.majorityElement(vals);
    cout << ans << endl;
    return 0;
}