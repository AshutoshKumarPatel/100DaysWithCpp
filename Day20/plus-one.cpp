#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }   
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> digits = {9};
    vector<int> result = solution.plusOne(digits);
    for (int i : result) {
        cout << i;
    }
    cout << endl;
    return 0;
}