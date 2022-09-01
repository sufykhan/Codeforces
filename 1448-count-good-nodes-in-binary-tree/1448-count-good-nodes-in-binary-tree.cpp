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
  //  int goodNodes(TreeNode* root) {
        
        int count = 0;
    void dfs(TreeNode* node,int curMax){
        if (!node) return;
        
        if (node->val >= curMax){
            count++;
            curMax = node->val;
        }
        dfs(node->left, curMax);
        dfs(node->right, curMax);
    }
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    
    }
};