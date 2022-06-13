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
    int ans=INT_MIN;
    int D(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left=D(root->left);
        int right=D(root->right);
        int maxi=max(left,right)+1;
        ans=max(left+right+1,ans);
        return maxi;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        D(root);
        return ans-1;
    }
};