#include <iostream>
#include <cstdint>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};

int main() {
    uint32_t val = 00000000000000000000000000001011;
    Solution solution;
    int ans = solution.hammingWeight(val);
    cout << ans << endl;
    return 0;
}