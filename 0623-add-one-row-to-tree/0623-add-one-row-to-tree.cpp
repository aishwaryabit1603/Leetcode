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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode * n1 = new TreeNode(val);
        
        if(depth == 1){
            n1->left = root;
            return n1;
        }
        
        int m = 1;
        queue<TreeNode *> q;
        q.push(root);
        vector<TreeNode *> v1;
        
        while(!q.empty()){
            int size = q.size();
            for(int i = 0;i < size; i++){
                TreeNode * n = q.front();
                q.pop();
                if(m == depth-1) v1.push_back(n);
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            if(m == depth-1) break;
            m++;
        }
        for(int i = 0;i < v1.size(); i++)
        {
            TreeNode * node = v1[i];
            TreeNode * n2 = new TreeNode(val);
            TreeNode * n3 = new TreeNode(val);
            
            if(node->left == NULL){
                node->left = n2;
            }
            else if(node->left){
                TreeNode *l  = node->left;
                node->left = n2;
                n2->left = l;
            }

            if(node->right == NULL){
                node->right = n3;
            }
            else if(node->right){
                TreeNode *r = node->right;
                node->right = n3;
                n3->right = r;
            }
        }
        return root;
    }
};