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
    bool isSubtree(TreeNode* root, TreeNode* subroot, bool M = false) {

        if (!root && !subroot) return true;
        if (!root || !subroot) return false;
        
        if (M){
            if (root->val != subroot->val) return false;
            return isSubtree(root->left, subroot->left, true) && isSubtree(root->right, subroot->right, true);
        }

        if (root->val == subroot->val && isSubtree(root->left, subroot->left, true) &&  isSubtree(root->right, subroot->right, true)){
            return true;
        }

        return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
    }
};