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
    void helper(TreeNode* root,string s,vector<string>& ans)
    {
        if(root)
        {
            if(!root->left && !root->right){
                s+=to_string(root->val);
                ans.push_back(s);
            }
            else 
                s+=to_string(root->val) + "->";
            
            helper(root->left,s,ans);
            helper(root->right,s,ans);
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        helper(root,s,ans);
        return ans;
    }
};