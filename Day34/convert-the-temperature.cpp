#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        cout << fixed << setprecision(5);
        return {celsius + 273.15, celsius * 1.8 + 32.00};
    }
};

int main () {
    Solution solution;
    vector<double> ans = solution.convertTemperature(36.50);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}