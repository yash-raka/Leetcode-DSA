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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<TreeNode*> q;

        q.push(root);
        int z = 0; 

        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();

            if (f->left){
                q.push(f->left);

                // if (z == f->val){
                //     z -= f->val;
                // }
                // z += f->left->val;

                // if (f->left->left){
                //     z -= f->left->val;
                // }
                // if (! f->left->left && f->left->right){
                //     z -= f->left->val;
                // }
                if(f->left->left==nullptr && f->left->right==nullptr){
                    z+=f->left->val;
                }
            }

            if (f->right){
                q.push(f->right);
            }
        }
    return z;
    }
};