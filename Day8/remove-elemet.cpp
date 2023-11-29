#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size(), index = 0;
        while (index < length) {
            if (nums[index] == val) {
                nums[index] = nums[length - 1];
                --length;
            } else {
                ++index;
            }
        }
        return length;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {3, 2, 2, 3, 4, 5};
    int val = 3;

    int result = solution.removeElement(nums, val);

    cout << "New length of array after removing " << val << ": " << result << endl;

    cout << "Modified vector: ";
    for (int i = 0; i < result; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}