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
    void dfs(TreeNode* root,int &cnt){
        if(root->left){
            cnt++;
            dfs(root->left,cnt);
        }
        if(root->right){
            cnt++;
            dfs(root->right,cnt);
        }
    }
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int cnt=1;
        dfs(root,cnt);   
        return cnt;
    }
};