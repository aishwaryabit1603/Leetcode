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
        int sum = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode * f = q.front();
            q.pop();
            if(f->left){
                q.push(f->left);
                TreeNode *ptr = f->left;
                if(ptr->left == NULL && ptr->right == NULL){
                    sum += ptr->val;
                }
            }
            if(f->right){
                q.push(f->right);
            }
        }
        return sum;
    }
};