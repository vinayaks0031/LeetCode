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
    int helper(TreeNode* root)
    {
        if(root==NULL) return 0;
        
        int left=helper(root->left);
        int right=helper(root->right);
        
        return max(left,right)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        int diaFromRoot= helper(root->left)+ helper(root->right);
        
        return max({left,right,diaFromRoot});
    }
};