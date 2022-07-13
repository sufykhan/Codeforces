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
   vector<vector<int>>v;
    map<int, vector<int>>mp;

    void Traversal(TreeNode * root,int level){
        if(root==nullptr) {
            return;
        }
        mp[level].push_back(root->val);
        Traversal(root->left,level+1);
        Traversal(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
            Traversal(root,0);
            for(auto x:mp){
                v.push_back(x.second);
            }
            return v;
    }
};