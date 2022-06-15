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
    bool recur(TreeNode* root,long long int currMax,long long int currMin){
        
        if(root==nullptr){
            return true;
        }
        if(root->val<currMax && root->val>currMin){
            return recur(root->left,root->val,currMin)&&recur(root->right,currMax,root->val);
        }
        return false;
        
        
    }
    bool isValidBST(TreeNode* root) {
        long long  x=1<<31;
        long long  y=-1*x;
        x--;
        return recur(root,y,x);
    }
};