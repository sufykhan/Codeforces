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
    void recur(TreeNode* root,TreeNode* &ans){
        if(!root){
            return;
        }
        recur(root->left,ans);
        
        ans->right=new TreeNode(root->val);
        ans=ans->right;
        
        recur(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=new TreeNode();
        TreeNode* temp;
        temp=ans;
        recur(root,temp);
        return ans->right;
    }
};

