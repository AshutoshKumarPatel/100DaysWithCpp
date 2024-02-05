#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mid = 0;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {mid++;}
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main(){ 
    vector<int> nums = {2,0,2,1,1,0};
    Solution sol;
    sol.sortColors(nums);
    for (int n : nums) {
        cout << n  << " ";
    }
    cout << endl;
    return 0;
}