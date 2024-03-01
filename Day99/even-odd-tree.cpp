#include <iostream>
#include <climits>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL){return true;}
        queue<TreeNode*>q;
        bool flag=true;
      
        q.push(root);
        while(!q.empty()){
            int x = q.size() ;
            int prev = flag ? INT_MIN : INT_MAX;
            for(int i=0; i< x; i++){
                TreeNode* frontNode = q.front();
                q.pop();  
                if(flag){
                    if(frontNode->val %2==0 || frontNode->val <=  prev){return false;}
                }
                else{
                    if(frontNode->val %2!=0  || frontNode->val  >= prev){return false;}
                }

                if(frontNode->left){q.push(frontNode->left);}
                if(frontNode->right){q.push(frontNode->right);}
                prev= frontNode->val;
            }
            flag=!flag;
        }
        return true;
    }
};

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(10);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(12);
    root->left->left->right = new TreeNode(8);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->left->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    root->right->right->right = new TreeNode(2);
    Solution sol;
    cout << sol.isEvenOddTree(root) << endl;
    return 0;
}