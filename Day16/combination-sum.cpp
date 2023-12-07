#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> result;
        std::vector<int> path;
        combinationSumHelper(candidates, target, 0, path, result);
        return result;
    }

private:
    void combinationSumHelper(std::vector<int>& candidates, int target, int start, std::vector<int>& path, std::vector<std::vector<int>>& result) {
        if (target == 0) {
            result.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {
            path.push_back(candidates[i]);
            combinationSumHelper(candidates, target - candidates[i], i, path, result);
            path.pop_back();
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    std::vector<std::vector<int>> result = solution.combinationSum(candidates, target);

    // Print the result
    for (const auto& combination : result) {
        std::cout << "[";
        for (int i = 0; i < combination.size(); ++i) {
            std::cout << combination[i];
            if (i < combination.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
