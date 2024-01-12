#include <iostream>
using namespace std;

class Solution {
public:
    int add (int num) {
        int ans = 0;
        while (num > 0) {
            ans += num % 10;
            num /= 10;
        }
        return ans;
    }
    int addDigits(int num) {
        int ans = add(num);
        while (ans > 9) {
            ans = add(ans);
        }
        return ans;
    }
};

int main () {
    int num = 38;
    Solution sol;
    cout << sol.addDigits(num) << endl;
    return 0;
}