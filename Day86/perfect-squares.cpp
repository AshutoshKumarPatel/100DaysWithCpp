#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        for(int i=1; i*i<=n; i++){
            dp[i*i] = 1;
        }

        for(int i=1; i<=n; i++){
            if(dp[i] == 1) continue;
            int root = sqrt(i), mn = INT_MAX;
            for(int j=1; j<=root; j++){
                mn = min(mn, dp[j*j] + dp[i - j*j]);
            }
            dp[i] = mn;
        }
        return dp[n];
    }
};

int main() {
    int n = 12;
    Solution sol;
    cout << sol.numSquares(n) << endl;
    return 0;
}
