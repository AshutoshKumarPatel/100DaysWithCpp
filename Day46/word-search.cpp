#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == word[0] && backtrack(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool backtrack(vector<vector<char>>& board, string& word, int wIdx, int i, int j) {
        if (wIdx == word.size()) {
            return true;
        }

        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[wIdx]) {
            return false;
        }

        char originalChar = board[i][j];
        board[i][j] = '#';

        if (backtrack(board, word, wIdx + 1, i + 1, j) ||
            backtrack(board, word, wIdx + 1, i - 1, j) ||
            backtrack(board, word, wIdx + 1, i, j + 1) ||
            backtrack(board, word, wIdx + 1, i, j - 1)) {
            return true;
        }

        board[i][j] = originalChar;
        return false;
    }
};

int main() {
    vector<vector<char>> vals = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word = "SEE";
    Solution sol;
    cout << sol.exist(vals, word) << endl;
    return 0;
}
