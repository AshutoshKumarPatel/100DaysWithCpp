#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) {
            return x;
        }

        int left = 0, right = x;
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid <= x / mid) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    int ans = solution.mySqrt(8);
    std::cout << ans << std::endl;
    return 0;
}
