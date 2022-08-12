/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     TreeNode* ans;
    bool recur(TreeNode*root,map<TreeNode*,bool>&mp,TreeNode*p){
        
        if(root==nullptr){
            return false;
        }
        if(root==p){
            mp[root]=true;
            return true;
        }
        bool ans1=recur(root->left,mp,p) || recur(root->right,mp,p);
        if(ans1){
            mp[root]=true;
        }
        return ans1;
    }
    
    
    bool recur2(TreeNode*root,map<TreeNode*,bool>&mp,TreeNode*p){
        if(root==nullptr){
            return false;
        }
        if(root==p){
            if(mp.find(root)!=mp.end() && !ans){
                ans=root;
            }
        
            return true;
        }

        bool ans1=recur2(root->left,mp,p) || recur2(root->right,mp,p);
        if(ans1){
            if(mp.find(root)!=mp.end() && !ans){
                ans=root;
            }
        }
        return ans1;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        map<TreeNode* ,bool>mp;
       
        recur(root,mp,p);
        recur2(root,mp,q);
        return ans;
    }
    
};