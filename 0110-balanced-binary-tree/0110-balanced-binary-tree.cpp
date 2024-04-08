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
    int height(TreeNode * root){
        if(root == NULL){
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        l++;
        r++;
        return max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int r = 0;
        int l = 0;
        if(root->right) r = height(root->right);
        if(root->left) l = height(root->left);
        if(abs(r-l) > 1) return false;
        // else return true;
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};