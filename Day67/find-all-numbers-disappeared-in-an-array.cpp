#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int low = 1;
        int high = nums.size();
        vector<int> ans;
        unordered_map<int, int> vals;
        for (int num : nums) {
            vals[num]++;
        }

        for (int i = low; i <= high; i++) {
            if (vals[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums  = {1,1};
    Solution sol;
    vector<int> ans = sol.findDisappearedNumbers(nums);
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}