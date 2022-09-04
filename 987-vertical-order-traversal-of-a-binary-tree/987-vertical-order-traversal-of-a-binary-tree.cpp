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
    int mini=INT_MAX;
    int maxi=INT_MIN;
    void recur(TreeNode* root,map<pair<int,int>,vector<int>>&mp,int pos,int level)
    {
        if(root==nullptr){
            return;
        }
        maxi=max(maxi,pos);
        mini=min(mini,pos);
        
        mp[{pos,level}].push_back(root->val);
        
        recur(root->right,mp,pos+1,level+1);
        recur(root->left,mp,pos-1,level+1);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>,vector<int>>mp;
        recur(root,mp,0,0);
        int n=maxi-mini+1;
        vector<vector<int>>ans(n,vector<int>());
        int i=-1*mini;
        for(auto x:mp){
            vector<int>val=x.second;
            sort(val.begin(),val.end());
            
            for(auto y:val){
               ans[x.first.first + i].push_back(y); 
            }
            
        }
        return ans;
    }
};