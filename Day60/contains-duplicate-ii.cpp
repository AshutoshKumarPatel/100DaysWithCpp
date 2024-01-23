#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end() && abs(m[nums[i]]-i) <= k){return true;}
            m[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    Solution sol;
    cout << sol.containsNearbyDuplicate(nums, k) << endl;
    return 0;
}