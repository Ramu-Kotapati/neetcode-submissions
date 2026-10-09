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
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int res=dfs(root,root->val);
        return res;
    }
    int dfs(TreeNode *node,int currmax)
    {
        if(!node)return 0;
        int res=0;
        if(node->val>=currmax)
        {
            currmax=node->val;
            res=1;
        }
        res+=dfs(node->left,currmax);
        res+=dfs(node->right,currmax);

        return res;


    }
};
