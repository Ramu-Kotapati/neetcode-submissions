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
    TreeNode* invertTree(TreeNode* root) {  //using DFS(stack)
        stack<TreeNode*> stk;
        if(root==nullptr)
        {
            return nullptr;
        }
        stk.push(root);
        
        while(!stk.empty())
        {
            TreeNode* curr=stk.top();
            stk.pop();

            TreeNode* tmp=curr->left;
            curr->left=curr->right;
            curr->right=tmp;
            if(curr->left)stk.push(curr->left);
            if(curr->right)stk.push(curr->right);

        }

        return root;

    }
};