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
    int helper(TreeNode* root, int& ans)
    {
        if(root == NULL) return 0;
        
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        ans+=abs(left-right);
        return left + right + root->val;
        
    }
public:
    int findTilt(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans;
    }
};