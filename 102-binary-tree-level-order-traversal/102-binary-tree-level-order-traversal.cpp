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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==NULL) return {};
        
        vector<vector<int>> ans;
        vector<int> v;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()!=0)
        {
            TreeNode* tmp=q.front();
            q.pop();
            
            if(tmp==NULL)
            {
                ans.push_back(v);
                v.clear();
                if(q.size()!=0)
                {
                    q.push(NULL);
                }
            }
            else
            {
                v.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
        }
        return ans;
    }
};