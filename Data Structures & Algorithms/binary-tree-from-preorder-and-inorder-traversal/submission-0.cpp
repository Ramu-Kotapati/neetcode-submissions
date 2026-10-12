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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()||inorder.empty())return nullptr;
        unordered_map<int,int> ump;
        for(int i=0;i<inorder.size();i++)
        {
            ump[inorder[i]]=i;
        }

        TreeNode *root=buildTree(preorder,0,preorder.size()-1,
                                 inorder,0,inorder.size()-1,ump);

        return root;

    }


     TreeNode* buildTree(vector<int>& preorder,int prestart, int preend ,
                         vector<int>& inorder, int instart , int inend ,
                          unordered_map<int,int> &ump)
                         
    {
        if(prestart>preend || instart>inend) return nullptr;

        TreeNode *root=new TreeNode(preorder[prestart]);

        int inroot=ump[root->val];
        int numsleft=inroot-instart;

        root->left=buildTree(preorder,prestart+1 ,prestart+numsleft,
                             inorder, instart , inroot-1 ,ump);

        root->right=buildTree(preorder , prestart+numsleft+1 , preend,
                              inorder, inroot+1, inend,ump);

        return root;
    }

};
