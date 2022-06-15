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
    int mini=INT_MIN;
    int recur(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int x=max(0,recur(root->left));
        int y=max(0,recur(root->right));
       
        mini=max(mini,root->val+x+y);
        
        return root->val+max(x,y);
        
    }
    int maxPathSum(TreeNode* root) {
        recur(root);
        return mini;
    }
};