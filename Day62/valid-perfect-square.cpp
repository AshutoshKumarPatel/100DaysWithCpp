#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 0;
        int end = num;

        while (start <= end) {
            long int mid = start + (end - start) / 2;
            if (mid * mid == num) {return true;}
            else if (mid * mid > num) {end = mid - 1;}
            else {start = mid + 1;}
        }    
        return false; 
    }
};

int main() {
    int num = 16;
    Solution sol;
    cout << sol.isPerfectSquare(num) << endl;
    return 0;
}