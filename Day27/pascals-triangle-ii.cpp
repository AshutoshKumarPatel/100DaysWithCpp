#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1);
        result[0] = 1;
        for (int k = 1; k <= rowIndex; k++) {
            result[k] = (long)result[k-1] * (rowIndex - k + 1) / k;
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> ans = solution.getRow(33);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}