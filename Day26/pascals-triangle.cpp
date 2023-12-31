#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pTriangle;
        if (numRows == 0 ) {
            return pTriangle;
        }
        pTriangle.push_back({1});
        for (int i = 1; i < numRows; ++i) {
            vector<int> lastRow = pTriangle.back();
            vector<int> currentRow = {1};
            for (int j = 1; j < lastRow.size(); ++j) {
                currentRow.push_back(lastRow[j-1] + lastRow[j]);
            }
            currentRow.push_back(1);
            pTriangle.push_back(currentRow);
        }
        return pTriangle;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> ans = solution.generate(10);
    for (const auto& row : ans) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}