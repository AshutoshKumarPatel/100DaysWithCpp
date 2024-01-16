#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> wMap;
        unordered_set<string> usedWords;
        istringstream wds(s);
        string word;
        vector<string> words;

        while (wds >> word){
            words.push_back(word);
        }

        if (pattern.length() != words.size()) {return false;}
        for (int i = 0; i < pattern.length(); i++) {
            char currentChar = pattern[i];

            if (wMap.find(currentChar) == wMap.end()) {
                if (usedWords.find(words[i]) != usedWords.end()) {
                    return false;
                }

                wMap[currentChar] = words[i];
                usedWords.insert(words[i]);
            } else {
                if (wMap[currentChar] != words[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    string pattern = "aaaa";
    string s = "dog cat cat dog";
    Solution sol;
    cout << sol.wordPattern(pattern, s) << endl;
    return 0;
}