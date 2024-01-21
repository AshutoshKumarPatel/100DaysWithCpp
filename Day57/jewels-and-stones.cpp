#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jCount;
        int ans = 0;
        for (int i = 0; i < stones.length(); i++) {
            jCount[stones[i]]++;
        }
        for (int i = 0; i < jewels.length(); i++) {
            ans += jCount[jewels[i]];
        }
        return ans;
    }
};

int main() {
    string jewels = "aA";
    string stones = "aAAbbbb";
    Solution sol;
    cout << sol.numJewelsInStones(jewels, stones) << endl;
    return 0;
}