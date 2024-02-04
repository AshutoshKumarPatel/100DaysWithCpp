#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string sample = "123456789";
        int curr;
        int s_size = sample.size();
        for (int i = 0; i < s_size; i++) {
            for (int j = i+1; j <= s_size; j++) {
                curr = stoi(sample.substr(i, j-i));
                if (curr >= low && curr <= high) {ans.push_back(curr);}
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int low = 1000;
    int high = 13000;
    Solution sol;
    vector<int> ans = sol.sequentialDigits(low, high);
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}