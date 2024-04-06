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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        vector<int> v1 = inorderTraversal(root->left);
        ans.push_back(root->val);
        vector<int> v2 = inorderTraversal(root->right);
        ans.insert(ans.begin(),v1.begin(),v1.end());
        ans.insert(ans.end(),v2.begin(),v2.end());
        return ans;
    }
};