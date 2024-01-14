#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int wateringPlants(std::vector<int>& plants, int capacity) {
        int ans = 0;
        int cap = capacity;

        for (int i = 0; i < plants.size(); i++) {
            if (cap >= plants[i]) {
                cap -= plants[i];
                ans += 1;
            }

            if (i + 1 < plants.size() && cap < plants[i + 1]) {
                ans += (i + 1) * 2;
                cap = capacity;
            }
        }

        return ans;
    }
};


int main() {
    vector<int> vals = {7,7,7,7,7,7,7};
    int capacity = 8;
    Solution sol;
    cout << sol.wateringPlants(vals, capacity) << endl;
    return 0;
}