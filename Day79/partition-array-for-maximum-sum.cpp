#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maxSum;
    int solve (vector<int>& arr, int k, int idx) {
        int arr_size = arr.size();
        int maxVal = 0;
        int ans = 0;

        if (idx >= arr_size) {return 0;}
        if (maxSum [idx] != -1) {return maxSum[idx];}

        for (int i = idx; i < min(idx+k, arr_size); i++) {
            maxVal = max(maxVal, arr[i]);
            ans = max(ans, (i - idx + 1) * maxVal + solve(arr, k, i+1));
        }
        maxSum[idx] = ans;
        return ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        maxSum.resize(arr.size(), -1);
        return solve(arr, k , 0);
    }
};

int main() {
    vector<int> arr = {1,15,7,9,2,5,10};
    int k = 3;
    Solution sol;
    cout << sol.maxSumAfterPartitioning(arr, k) << endl;
    return 0;
}