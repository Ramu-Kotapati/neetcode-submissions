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

        queue<pair<TreeNode*,int>>q;
        

        q.push({root,root->val});
        int goodnodes=0;
        
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                auto pair=q.front();
                 q.pop();
                TreeNode *curr=pair.first;
                int currmax=pair.second;
                if(curr->val>=currmax)
                {
                   goodnodes++;
                   currmax=curr->val;

                }
                
                if(curr->right)q.push({curr->right,currmax});
                if(curr->left)q.push({curr->left,currmax});     
                
            }

        }
        return goodnodes;

        

    }
};
