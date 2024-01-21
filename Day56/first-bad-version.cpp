#include <iostream>
using namespace std;

class Solution {
private:
    int bad = 4;

public:
    bool isBadVersion(int version) {
        return version >= bad;
    }

    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        int mid;
        while (left + 1 < right) {
            mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid;
            }
            else {
                left = mid;
            }
        }
        return right;
    }
};

int main () {
    int n = 5;
    Solution sol;
    cout << sol.firstBadVersion(n) << endl;
    return 0;
}