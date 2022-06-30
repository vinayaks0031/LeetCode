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
    void helper(TreeNode* root,int cnt,int &depth)
    {
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL)
        {
            depth=min(cnt,depth);
        }
        
        helper(root->left,cnt+1,depth);
        helper(root->right,cnt+1,depth);
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int depth=INT_MAX;
        helper(root,1,depth);
        return depth;
    }
};