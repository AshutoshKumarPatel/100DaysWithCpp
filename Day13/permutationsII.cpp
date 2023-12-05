#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = solution.permuteUnique(nums);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}