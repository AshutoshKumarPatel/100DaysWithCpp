#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if (nums.size() < 3) {
            return *max_element(nums.begin(), nums.end());
        }

        long long max1 = numeric_limits<long long>::min();
        long long max2 = numeric_limits<long long>::min();
        long long max3 = numeric_limits<long long>::min();

        for (int num : nums) {
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num < max1 && num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num < max2 && num > max3) {
                max3 = num;
            }
        }

        return max3 == numeric_limits<long long>::min() ? max1 : max3;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3};
    Solution sol;
    cout << sol.thirdMax(nums) << endl;
    return 0;
}