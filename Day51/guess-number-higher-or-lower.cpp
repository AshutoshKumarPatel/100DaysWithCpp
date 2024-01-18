#include <iostream>
using namespace std;

class Solution {
private:
    int pick = 6;

public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int result = guess(mid);

            if (result == 0) {
                return mid;
            } else if (result == 1) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }

    int guess(int num) {
        if (num < pick) {
            return 1;
        } else if (num > pick) {
            return -1;
        } else {
            return 0;
        }
    }
};

int main() {
    int n = 10;
    Solution sol;
    cout << sol.guessNumber(n) << endl;
    return 0;
}
