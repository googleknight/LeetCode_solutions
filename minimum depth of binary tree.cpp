//https://leetcode.com/problems/minimum-depth-of-binary-tree
/** * Definition for a binary tree node. * struct TreeNode {
 *

 int val;
*

 TreeNode *left;
*

 TreeNode *right;
*

 TreeNode(int x)
:
val(x), left(NULL), right(NULL)
{
}
* };
*/class Solution
{
public:
    int minDepth(TreeNode* root)
    {
        int left=0;
        int right=0;
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        if(root->left!=NULL)
            left=1+minDepth(root->left);
        if(root->right!=NULL)
            right=1+minDepth(root->right);
        if(root->left==NULL && root->right!=NULL)
            return right;
        else if(root->right==NULL && root->left!=NULL)
            return left;
        if(left>right)
            return right;
        else return left;
    }
};