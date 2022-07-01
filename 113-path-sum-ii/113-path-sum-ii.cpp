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
    void helper(TreeNode* root, int targetSum,vector<vector<int>>& ans,vector<int> v,int sum)
    {
        if(root)
        {
            v.push_back(root->val);
            sum+=root->val;
            if((!root->left && !root->right) && sum==targetSum ) ans.push_back(v);
            helper(root->left,targetSum,ans,v,sum);
            helper(root->right,targetSum,ans,v,sum);
        }
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        int sum=0;
        helper(root,targetSum,ans,v,sum);
        return ans;
    }
};