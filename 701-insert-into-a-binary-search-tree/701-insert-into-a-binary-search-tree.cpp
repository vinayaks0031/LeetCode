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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode=new TreeNode(val);
        if(root == NULL) return newNode;
        
        TreeNode* ans=root;
        TreeNode* beforeNull=NULL;
        while(root != NULL)
        {
            beforeNull=root;
            root=root->val > val ? root->left : root->right;
        }
        
        if(beforeNull->val > val){
            beforeNull->left=newNode;
        }
        else{
            beforeNull->right=newNode;
        }
        
        return ans;
    }
};