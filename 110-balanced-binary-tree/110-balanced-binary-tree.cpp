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
    bool ans=true;
    int recur(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int lh=recur(root->left);
        int rh=recur(root->right);
        if(abs(rh-lh)>1){
            ans=false;
            return 0;
        }
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        recur(root);
        return ans;
    }
};