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
    void back(TreeNode* root,int &value){
        if(root==nullptr){
            return ;
        }
        
        back(root->right,value);
        
        value+=root->val;
        root->val=value;
        
        back(root->left,value);
    }
    TreeNode* convertBST(TreeNode* root) {
        int val=0;
        back(root,val);
        return root;
    }
};