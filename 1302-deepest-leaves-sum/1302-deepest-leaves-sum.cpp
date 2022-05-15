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
    int val(TreeNode* root,int d,int maxi){
        if(root==nullptr){
            return 0;
        }
        if(root->left==nullptr&&root->right==nullptr){
           
            if(d==maxi-1){
                 return root->val;
            }
            else {
                return 0;
            }
        }
        return val(root->right,d+1,maxi)+val(root->left,d+1,maxi);
    }
    int maxD(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        return 1+max(maxD(root->right),maxD(root->left));
    }
    int deepestLeavesSum(TreeNode* root) {
        int d=maxD(root);
        return val(root,0,d);
       
    }
};