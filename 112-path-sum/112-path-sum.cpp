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
      bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;                                         //Terminating Condition
        sum=sum-root->val;                                             //Body
        if(sum==0&&!root->left&&!root->right)return true;              //body
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);//Propagation
    }
};