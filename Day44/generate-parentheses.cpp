#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string str = "";
    void putParenthesis(vector<string>& res, int open, int close) {
        if(open == 0 && close == 0) {
            res.push_back(str);
            return;
        }
        if(open > 0) {
            str += "(";
            putParenthesis(res, open-1, close);
            str = str.substr(0, str.size()-1);
        }
        if(close > open) {
            str += ")";
            putParenthesis(res, open, close-1);
            str = str.substr(0, str.size()-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> res;
        putParenthesis(res, open, close);
        return res;
    }
};

int main () {
    Solution sol;
    vector<string> ans = sol.generateParenthesis(3);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}