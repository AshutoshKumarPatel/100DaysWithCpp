#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int stairCount = 0;
        while (n > 0 & n - (stairCount + 1) >= 0) {
            stairCount++;
            n -= stairCount;
            cout << stairCount << " " << n << endl;
        }
        return stairCount;
    }
};

int main() {
    int n = 5;
    Solution sol;
    cout << sol.arrangeCoins(n) << endl;
    return 0;
}