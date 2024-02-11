#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void solve(int idx, string s, string temp,unordered_map<char,string> dialpad,vector<string> &result){
        if(idx>=s.size()){
            result.push_back(temp);
        }
        char ch=s[idx];
        string str=dialpad[ch];
        
        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            solve(idx+1, s, temp,dialpad, result);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> result;
        unordered_map<char,string> dialpad;
        dialpad['2']="abc";
        dialpad['3']="def";
        dialpad['4']="ghi";
        dialpad['5']="jkl";
        dialpad['6']="mno";
        dialpad['7']="pqrs";
        dialpad['8']="tuv";
        dialpad['9']="wxyz";
        solve(0,digits,"",dialpad,result);
        return result;
    }
};

int main() {
    string digits = "23";
    Solution sol;
    vector<string> ans = sol.letterCombinations(digits);
    for (string s : ans) {
        cout << s << " " ;
    }
    cout << endl;
    return 0;
}