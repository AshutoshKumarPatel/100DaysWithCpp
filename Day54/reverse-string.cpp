#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

int main() {
    vector<char> vals = {'h','e','l','l','o'};
    Solution sol;
    sol.reverseString(vals);
    for (auto val : vals) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}