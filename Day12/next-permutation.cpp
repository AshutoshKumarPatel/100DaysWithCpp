#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = 0; i < n-1; i++) {
          if(nums[i]<nums[i+1]) idx = i;
        }
        if(idx == -1) {
          reverse(nums.begin(), nums.end());
          return;
        }
        int l = idx + 1;
        for(int i = idx + 1; i < n; i++) {
            if(nums[i] > nums[idx]) l = i;
        }
        swap(nums[idx], nums[l]);
        reverse(nums.begin() + 1 + idx, nums.end());
        return;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 1};
    solution.nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
