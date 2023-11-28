#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 1; i < n; i++){
            if (nums[i] == nums[i - 1]){
                nums.erase(nums.begin() + i);
                i--;
                n = nums.size();
            }
        }
        return n;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    Solution solution;
    int newLength = solution.removeDuplicates(nums);
    cout << "New length of the array: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}
