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
        vector<int> v1;
        // if(root == NULL) return v1;
        
        TreeNode * node = root;
       
        stack<TreeNode*> s;
        while(true){
            if(node != NULL){
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty()) break;
                node = s.top();
                v1.push_back(node->val);
                s.pop();
                node = node->right;
            }
        }
        return v1;
    }
};