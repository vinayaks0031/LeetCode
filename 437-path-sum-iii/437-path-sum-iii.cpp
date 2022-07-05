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
    void checkSum(TreeNode* root,long long sum,int targetSum,int& cnt)
    {
        if(root)
        {
            sum+=root->val;
            if(sum==targetSum) cnt++;
            checkSum(root->left,sum,targetSum,cnt);
            checkSum(root->right,sum,targetSum,cnt);
        }
    }
    void traverse(TreeNode* root, int targetSum, int& cnt)
    {
        if(root)
        {
            checkSum(root,0,targetSum,cnt);
            traverse(root->left,targetSum,cnt);
            traverse(root->right,targetSum,cnt);
        }
    
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        int cnt=0;
        traverse(root,targetSum,cnt);
        return cnt;
    }
};