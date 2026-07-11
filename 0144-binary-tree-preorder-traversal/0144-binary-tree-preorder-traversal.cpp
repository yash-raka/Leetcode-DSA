/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void POT(TreeNode*root){
        if (!root){
            return;
        }
        ans.push_back(root->val);
        if (root->left){
            POT(root->left);
        }
        if (root->right){
            POT(root->right);
        }

    }
    vector<int> preorderTraversal(TreeNode* root) {
        POT(root);
        return ans;
    }
};