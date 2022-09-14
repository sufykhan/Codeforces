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
    int ans=0;
    
    void dfs(TreeNode* root,int cnt=0){
        if(root==nullptr) {
            return;
        };
        cnt=cnt^(1<<root->val);
        if(root->left==nullptr && root->right==nullptr && ((cnt&(cnt-1))==0)){
             ans++;
        }
        dfs(root->left,cnt);
        dfs(root->right,cnt);
        cnt=cnt^(1<<root->val);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return ans;
    }
};