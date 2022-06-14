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
    int k=0;
    TreeNode* recur(int i,int j,vector<int>&pre,vector<int>&ino,unordered_map<int,int>&mp){
    
        if(i>j){
            return nullptr;
        }
        TreeNode* root=new TreeNode(pre[k++]);
        int mid=mp[root->val];
        // if(i==j){
        //     return root;
        // }
        root->left=recur(i,mid-1,pre,ino,mp); 
        root->right=recur(mid+1,j,pre,ino,mp);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& ino) {
        unordered_map<int,int>mp;
        for(int i=0;i<ino.size();i++){
            mp[ino[i]]=i;
        }
        int i=0,j=ino.size()-1;
        return recur(i,j,pre,ino,mp);
    }
};