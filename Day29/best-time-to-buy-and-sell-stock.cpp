#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for (int price : prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }
        return max_profit;
    }
};


int main() {
    vector<int> prices = {7,1,5,3,6,4};
    Solution solution;
    int ans = solution.maxProfit(prices);
    cout << ans << endl;
    return 0;
}