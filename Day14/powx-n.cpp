#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double v = pow(x,n);
        return v;
    }
};

int main() {
    Solution solution;
    double n = -2;
    int x = 2;
    cout << solution.myPow(x, n);
    return 0;
}