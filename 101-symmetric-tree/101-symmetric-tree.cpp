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
    void helper(TreeNode* rootleft , TreeNode* rootright,bool& check)
    {
        if(!rootleft && !rootright) return;
        
        if(!rootleft || !rootright)
        {
            check=0;
            return;
        }
        
        if(rootleft->val != rootright->val)
        {
            check=0;
            return;
        }
        
        helper(rootleft->left,rootright->right,check);
        helper(rootleft->right,rootright->left,check);
        
    }
        
public:
    bool isSymmetric(TreeNode* root) {
        bool check=1;
        helper(root->left,root->right,check);
        return check;    
    }
};