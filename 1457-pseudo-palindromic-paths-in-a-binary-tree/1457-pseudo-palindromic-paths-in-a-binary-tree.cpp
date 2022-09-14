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
    int ans;
    
    void dfs(TreeNode* root,vector<int>&v,vector<int>&g){
        if(root==nullptr) {
            return;
        };
        v[root->val]++;
        g.push_back(root->val);
        
        if(root->left==nullptr && root->right==nullptr){
             int val=0;
            // for(auto x:g) cout<<x<<" ";
            // cout<<"-->";
            for(int i=0;i<10;i++){
                if(v[i]%2==1) val++;
            }
            if(val<=1) ans++;
           // cout<<val<<"\n";
        }
        dfs(root->left,v,g);
        dfs(root->right,v,g);
        g.pop_back();
        v[root->val]--;
       
        
       
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        ans=0;
        vector<int>v(10,0);
        vector<int>g;
        dfs(root,v,g);
        return ans;
    }
};