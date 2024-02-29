#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = getDepth(root->left);
        int rightHeight = getDepth(root->right);

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        int currentDiameter = leftHeight + rightHeight;

        return max({leftDiameter, rightDiameter, currentDiameter});
    }

    int getDepth(TreeNode* root) {
        if (root == nullptr) {return 0;}
        int left = getDepth(root -> left);
        int right = getDepth(root -> right);
        return 1 + max(left, right);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution sol;
    cout << sol.diameterOfBinaryTree(root) << endl;
    return 0;
}