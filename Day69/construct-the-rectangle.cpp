#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int m = sqrt(area);
        while (area % m != 0){
            m--;
        }
        return {area/m,m};
    }
};

int main() {
    int area = 37;
    Solution sol;
    vector<int> ans = sol.constructRectangle(area);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}