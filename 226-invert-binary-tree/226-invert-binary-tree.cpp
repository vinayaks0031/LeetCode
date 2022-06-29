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
private:
    void helper(TreeNode* root){
        if(root==NULL) return;
        
        TreeNode* tmp=root->left;
        root->left=root->right;
        root->right=tmp;
        
        helper(root->left);
        helper(root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};