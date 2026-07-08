/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q1;
        q1.push(original);
        queue<TreeNode*> q2;
        q2.push(cloned);

        while(!q1.empty() && !q2.empty()){
            TreeNode* f1 = q1.front();
            q1.pop();
            TreeNode* f2 = q2.front();
            q2.pop();

            if (f1 == target){
                return f2;
            }

            if (f1->left && f2->left){
                q1.push(f1->left);
                q2.push(f2->left);
            }
            if (f1->right && f2->right){
                q1.push(f1->right);
                q2.push(f2->right);
            }
            if (f1->left && f2->left){
                q1.push(f1->left);
                q2.push(f2->left);
            }
        }
    return 0;
    }
};