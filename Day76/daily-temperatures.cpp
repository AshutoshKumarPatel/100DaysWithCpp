#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        int n = temperatures.size();
        
        for (int i = n - 2; i >= 0; --i) {
            int j = i + 1;
            
            while (j < n && temperatures[j] <= temperatures[i]) {
                if (ans[j] > 0) {
                    j += ans[j];
                } else {
                    j = n;
                }
            }
            
            if (j < n) {
                ans[i] = j - i;
            }
        }
        
        return ans;
    }
};

int main() {
    vector<int> temps = {55,38,53,81,61,93,97,32,43,78};
    Solution sol;
    vector<int> ans = sol.dailyTemperatures(temps);
    
    for (int a : ans) {
        cout << a << " ";
    }
    
    cout << endl;
    return 0;
}
