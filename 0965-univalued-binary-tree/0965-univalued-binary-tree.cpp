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
    bool isUnivalTree(TreeNode* root) {

        if (root == nullptr) return root;
        
        queue<TreeNode*> q;
        q.push(root);
        int z = root->val;
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            if (f->val != z){
                return false;
            }

            if (f->left){
                q.push(f->left);
            }
            if (f->right){
                q.push(f->right);
            }
        }
    return true;
    }
};