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
    bool isSame(TreeNode* l,TreeNode* r){
        
        if(l==nullptr&&r==nullptr){
            return true;
        }
        if(l!=nullptr && r==nullptr){
            return false;  
        }
        if(r!=nullptr && l==nullptr){
            return false;  
        }
         
        return l->val==r->val && isSame(l->left,r->right)&&isSame(l->right,r->left);
            
    }
    bool isSymmetric(TreeNode* root) {
        
       TreeNode* leftw=root->left;
       TreeNode* rightw=root->right;
       return isSame(leftw,rightw);
        
    }
};