#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        set<int> knownSet = {0, firstPerson};
        
        vector<vector<pair<int, int>>> sortedMeetings;
        sort(meetings.begin(), meetings.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[2] < b[2];
        });

        set<int> seenTime;
        
        for (const auto& meeting : meetings) {
            if (seenTime.find(meeting[2]) == seenTime.end()) {
                seenTime.insert(meeting[2]);
                sortedMeetings.push_back({});
            }
            sortedMeetings.back().push_back({meeting[0], meeting[1]});
        }

        for (const auto& meetingGroup : sortedMeetings) {
            set<int> peopleKnowSecret;
            unordered_map<int, vector<int>> graph;
            
            for (const auto& pair : meetingGroup) {
                graph[pair.first].push_back(pair.second);
                graph[pair.second].push_back(pair.first);
                
                if (knownSet.find(pair.first) != knownSet.end()) peopleKnowSecret.insert(pair.first);
                if (knownSet.find(pair.second) != knownSet.end()) peopleKnowSecret.insert(pair.second);
            }
            
            queue<int> queue;
            for (int person : peopleKnowSecret) queue.push(person);
        
            while (!queue.empty()) {
                int curr = queue.front();
                queue.pop();
                knownSet.insert(curr);
                for (int neigh : graph[curr]) {
                    if (knownSet.find(neigh) == knownSet.end()) {
                        knownSet.insert(neigh);
                        queue.push(neigh);
                    }
                }
            }
        }

        return vector<int>(knownSet.begin(), knownSet.end());
    }
};

int main() {
    int n = 6;
    vector<vector<int>> meetings = {{1,2,5},{2,3,8},{1,5,1}};
    int firstperson = 1;
    Solution sol;
    vector<int> ans = sol.findAllPeople(n, meetings, firstperson);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}