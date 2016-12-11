//https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> temp;
        string ans="";
        if(root==NULL)
            return temp;
        if(root->left ==NULL && root->right==NULL)
        {
            ans+=to_string(root->val);
            temp.push_back(ans);
            return temp;
        }
        vector<string> left=binaryTreePaths(root->left);
        vector<string> right=binaryTreePaths(root->right);
        temp.reserve(left.size()+right.size());
        temp.insert(temp.end(),left.begin(),left.end());
        temp.insert(temp.end(),right.begin(),right.end());
        left.clear();
        right.clear();
        for(int i=0; i<temp.size(); i++)
            temp[i]=to_string(root->val)+"->"+temp[i];
        return temp;
    }
};