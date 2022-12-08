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
    void recur(TreeNode* root,vector<int>&ans){
        if(root==nullptr) return;
        
        if(root->right==nullptr && root->left==nullptr) ans.push_back(root->val);
        else{
            recur(root->left,ans);
            recur(root->right,ans);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        recur(root1,a);
        recur(root2,b);
        return a==b;
    }
};