#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> nCount;
        for (int i = 0; i < nums.size(); i++) {
            nCount[nums[i]]++;
            if (nCount[nums[i]] > 2) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    Solution sol;
    cout << sol.removeDuplicates(nums) << endl;
    return 0;
}