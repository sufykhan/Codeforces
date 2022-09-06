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
    
    int recur(TreeNode* root){
        
        if(root==nullptr) return 0;
        
        int nodeVal=root->val;
        
        int sumL=recur(root->left);
        int sumR=recur(root->right);
        
        if(sumL==0){
            root->left=nullptr;
        }
        if(sumR==0){
            root->right=nullptr;
        }
        return sumL+sumR+nodeVal;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        int xx=recur(root);
        if(xx==0) return nullptr;
        return root;
    }
};