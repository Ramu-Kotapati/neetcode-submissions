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
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{INT_MIN,INT_MAX}});
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                auto double_pair=q.front();
                q.pop();
                TreeNode *node=double_pair.first;
                int left=double_pair.second.first;
                int right=double_pair.second.second;
                if( !(left<node->val && node->val<right)) return false;
                if(node->left)q.push({node->left,{left,node->val}});
                if(node->right)q.push({node->right,{node->val,right}});
            }
        }

        return true;
    }
};
