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
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*> q1;
        q1.push(root);
        int x = 0;
        while(!q1.empty()){
            TreeNode* f1 = q1.front();
            q1.pop();

            if (f1->val <= high && f1->val >= low){
                x += f1->val;
            }
            if (f1->left){
                q1.push(f1->left);
            }
            if (f1->right){
                q1.push(f1->right);
            }
        }
    return x;
    }
};