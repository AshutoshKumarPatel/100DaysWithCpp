#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        while (nums.size() > 0) {
            if (nums.size() < 3) {return -1;}
            auto maxE = max_element(nums.begin(), nums.end());
            long long total = accumulate(nums.begin(), nums.end(), 0LL) - *maxE;
            
            if (total > *maxE) {
                return total + *maxE;
            }
            else {
                auto it = find(nums.begin(), nums.end(), *maxE);
                if (it != nums.end()) {
                    cout << "removing:" << *maxE << endl;
                    nums.erase(it);
                }
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {300005055,352368231,311935527,315829776,327065463,388851949,319541150,397875604,311309167,391897750,366860048,359976490,325522439,390648914,359891976,369105322,350430086,398592583,354559219,372400239,344759294,379931363,308829137,335032174,336962933,380797651,378305476,336617902,393487098,301391791,394314232,387440261,316040738,388074503,396614889,331609633,374723367,380418460,349845809,318514711,308782485,308291996,375362898,397542455,397628325,392446446,368662132,378781533,372327607,378737987};
    Solution sol;
    cout << sol.largestPerimeter(nums)<< endl;
    return 0;
}