#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxCap = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxCap = max(maxCap, h * w);
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxCap;
    }
};

int main () {
    vector<int> vals = {1,8,6,2,5,4,8,3,7};
    // vector<int> vals = {1,1};
    Solution sol;
    int ans = sol.maxArea(vals);
    cout << ans << endl;
    return 0;
}