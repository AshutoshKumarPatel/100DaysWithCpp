#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> p;
        int i=0, diff =0; 
        for(i=0; i<h.size()-1; i++){  
            diff = h[i+1]-h[i];
            if(diff <= 0){
                continue;
            }

            b -= diff; 
            p.push(diff); 
       
            if(b < 0){
                b += p.top(); 
                p.pop(); 
                l--;
            }
            if(l < 0) break;
        }
        return i;
    }
};


int main() {
    vector<int> h = {4,12,2,7,3,18,20,3,19};
    int b = 10, l = 2;
    Solution sol;
    cout << sol.furthestBuilding(h, b, l) << endl;
    return 0;
}