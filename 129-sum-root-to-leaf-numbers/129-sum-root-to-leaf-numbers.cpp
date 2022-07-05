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
    void helper(TreeNode* root,int sum,int& ans)
    {
        if(root)
        {
            sum=sum*10+root->val;
            if(!root->left && !root->right) ans+=sum;
            helper(root->left,sum,ans);
            helper(root->right,sum,ans);
        }
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        helper(root,0,ans);
        return ans;
    }
};