#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        n--;
        double sqrt5 = sqrt(5);

        sqrt5 = ((sqrt5 + 3) / (2 * sqrt5)) * pow(((1 + sqrt5) / 2), n) +
            ((sqrt5 - 3) / (2 * sqrt5)) * pow(((1 - sqrt5) / 2), n) + 0.5f;

        return sqrt5;
    }
};

int main () {
    Solution solution;
    int ans = solution.climbStairs(30);
    cout << ans << endl; 
}
