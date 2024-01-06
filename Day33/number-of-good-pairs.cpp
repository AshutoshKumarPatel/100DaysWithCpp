#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int sum = 0;
        for(int num : nums) {
            count[num]++;
        }
        for(auto i : count) {
            if (i.second >= 2) {
                sum += (i.second * (i.second - 1)) / 2;
            }
        }
        return sum;
    }
};

int main() {
    vector<int> val = {1,2,3,1,1,3};
    Solution solution;
    int ans = solution.numIdenticalPairs(val);
    cout << ans << endl;
    return 0;
}