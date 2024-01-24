#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> chCount;
        int odd_counter = 0;
        for (char c : s) {
            chCount[c]++;
            if (chCount[c] % 2 != 0) {odd_counter++;}
            else {odd_counter--;}
        }
        if (odd_counter > 1) {
            return s.length() - odd_counter + 1;
        }
        return s.length();
    }
};

int main() {
    string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    Solution sol;
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}