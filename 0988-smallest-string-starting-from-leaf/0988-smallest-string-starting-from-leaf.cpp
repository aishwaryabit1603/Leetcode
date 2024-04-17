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
    string smallestFromLeaf(TreeNode* root) {
        stack<pair<TreeNode *,string>> s1;
        s1.push({root,""});
        string path = "";
        
        while(!s1.empty()){
            auto [f,k] = s1.top();
            s1.pop();
            k = char('a' + f->val) + k;
            
            if(f->left == NULL && f->right == NULL){
                if(path.size() == 0 || path > k){
                    path = k;
                }
            }
            else{
                if(f->left) s1.push({f->left,k});
                if(f->right) s1.push({f->right,k});
            }
        }
        return path;
    }
};