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
    
    void util(TreeNode* root,vector<int>&v,int type,int &i){
        
        if(root==nullptr){
            return ;
        }
        util(root->left,v,type,i);
        
        if(type==0) v.push_back(root->val);
        else root->val=v[i++];
        
        util(root->right,v,type,i);
        
    }
    void recoverTree(TreeNode* root) {
        
        TreeNode* dummy=root;
        vector<int>v;
        int i=0;
        util(dummy,v,0,i);
        sort(v.begin(),v.end());
        i=0;
        util(root,v,1,i);
    }
};