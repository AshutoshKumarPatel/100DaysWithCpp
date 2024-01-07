#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && (n & (n-1)) == 0;
    }
};

int main () {
    Solution sol;
    cout << sol.isPowerOfTwo(8) << endl;
    return 0;
}