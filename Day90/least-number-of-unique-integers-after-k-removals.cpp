#include <iostream>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int& x:arr){
            mp[x]++;
        }
        vector<pair<int,int>>dp;
        
        for(auto it:mp){
            dp.push_back(it);
        }

        sort(begin(dp),end(dp),[](auto a,auto b){
            return a.second<b.second;
        });
        
        int count = 0;
        for(auto it:dp){
            if(k>=it.second){
                k-=it.second;
                count++;
            }else{
                break;
            }
        }
        
        return size(dp)-count;
    }
};

int main() {
    vector<int> arr = {4,3,1,1,3,3,2};
    int k = 3;
    Solution sol;
    cout << sol.findLeastNumOfUniqueInts(arr, k) << endl;
    return 0;
}