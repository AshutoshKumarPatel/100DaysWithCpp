#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> cCount;
        int counter = 0;
        for (int i = 0; i < s.length(); i++) {
            cCount[s[i]]++;
        }
        for (auto i: s) {
            if (cCount[i] == 1) {
                return counter;
            }
            counter++;
        }
        return -1;
    }
};

int main() {
    string s = "aabb";
    Solution sol;
    cout << sol.firstUniqChar(s) << endl;
    return 0;
}