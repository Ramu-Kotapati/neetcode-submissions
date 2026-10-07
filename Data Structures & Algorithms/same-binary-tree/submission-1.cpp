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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*,TreeNode*>> stk;
        stk.push({p,q});
        while(!stk.empty())
        {
         auto tree=stk.top();
         stk.pop();

         if(!tree.first&&!tree.second)continue;
         if(!tree.first||!tree.second)return false;
         if(tree.first->val!=tree.second->val)return false;
        stk.push({tree.first->left,tree.second->left});
        stk.push({tree.first->right,tree.second->right});
        }

        return true;
    }
};
