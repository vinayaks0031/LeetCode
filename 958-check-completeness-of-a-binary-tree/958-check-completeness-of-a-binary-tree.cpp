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
            v.push_back(temp.second);
            
            if(v.size()>1 && v[v.size()-1] != v[v.size()-2]+1)
                return false;
            
            if(temp.first->left) 
            {
                q.push({temp.first->left,temp.second * 2});
            }
            if(temp.first->right)
            {
                q.push({temp.first->right,temp.second * 2 + 1});
            }
        }
        
        return true;
    }
};