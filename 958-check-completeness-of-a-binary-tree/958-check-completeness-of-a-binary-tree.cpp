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
    bool isCompleteTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        vector<int> v;
        q.push({root,1});
        
        while(q.size()!=0)
        {
            pair<TreeNode*,int> temp=q.front();
            q.pop();
            TreeNode* node=temp.first;
            int idx=temp.second;
            
            v.push_back(idx);
            int n=v.size();          
            if(n>1 && v[n-1] != v[n-2]+1)
                return false;
            
            if(node->left) 
            {
                q.push({node->left,idx * 2});
            }
            if(node->right)
            {
                q.push({node->right,idx * 2 + 1});
            }
        }
        
        return true;
    }
};