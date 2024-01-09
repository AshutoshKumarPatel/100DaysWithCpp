#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};


int main () {
    vector<int> vals = {0,1,0,3,12};
    Solution sol;
    sol.moveZeroes(vals);
    for (auto n: vals) {
            cout << n << " ";
        }
        cout << endl;
    return 0;
}