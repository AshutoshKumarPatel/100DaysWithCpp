#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {      
        int maxi = 0 ;
        sort(piles.begin(),piles.end());
        int start = 0 ; 
        int end = piles.size()-1;
        while(start++<piles.size()/3) {
            maxi += piles[end-1];
            end = end-2;
        }
        return maxi;      
    }
};

int main () {
    // vector<int> vals = {9,8,7,6,5,1,2,3,4};
    vector<int> vals = {2,4,1,2,7,8};
    Solution sol;
    int ans = sol.maxCoins(vals);
    cout << ans << endl;
    return 0;
}