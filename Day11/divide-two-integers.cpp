#include <iostream>
#include <climits>
using namespace std;

class Solution {
    public:
    int divide (int dividend, int divisor) {
        long long int ans = static_cast<long long int>(dividend) / divisor;
        if (ans > INT_MAX) { return INT_MAX; }
        else if (ans < INT_MIN) { return INT_MIN; }
        else { return static_cast<int>(ans); } 
    }
};

int main() {
    Solution solution;
    cout << solution.divide(-2147483648, -1);
    return 0;
}