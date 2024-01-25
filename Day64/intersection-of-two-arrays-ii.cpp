#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int nums1_size = nums1.size();
        int nums2_size = nums2.size();
        int i = 0;
        int j = 0;

        while (i < nums1_size & j < nums2_size) {
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {i++;}
            else {j++;}
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    Solution sol;
    vector<int> ans = sol.intersect(nums1, nums2);
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}