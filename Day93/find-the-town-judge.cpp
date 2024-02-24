#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
		vector<int> in(N + 1), out(N + 1);
		for (auto a : trust) {
			++out[a[0]];
			++in[a[1]];
		}
		for (int i = 1; i <= N; ++i) {
			if (in[i] == N - 1 && out[i] == 0) return i;
		}
		return -1;
    }
};


int main() {
    vector<vector<int>> trust = {{1,3},{2,3}};
    int n = 3;
    Solution sol;
    cout << sol.findJudge(n, trust) << endl;
    return 0;
}