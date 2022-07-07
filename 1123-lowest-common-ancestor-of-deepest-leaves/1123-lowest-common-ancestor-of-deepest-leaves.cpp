class Solution {
private:
    TreeNode* lca(TreeNode* root,int a,int b)
    {
        if(root == NULL) return NULL;
        
        if(root->val == a || root->val == b) return root;
        
        TreeNode* left=lca(root->left,a,b);
        TreeNode* right=lca(root->right,a,b);
        
        if(left && right) return root;
        if(left) return left;
        else return right;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        
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