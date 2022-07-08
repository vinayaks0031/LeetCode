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
    TreeNode* lca(TreeNode* root,int &first,int& last)
    {
        if(!root) return NULL;
        
        if(root->val==first || root->val==last) return root;
        TreeNode* left=lca(root->left,first,last);
        TreeNode* right=lca(root->right,first,last);
        
        if(left && right) return root;
        if(left) return left;
        return right;
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int first=0,last=0;
        while(q.size()!=0)
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(i==1) first=temp->val;
                if(i==n) last=temp->val;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return lca(root,first,last);
    }
};