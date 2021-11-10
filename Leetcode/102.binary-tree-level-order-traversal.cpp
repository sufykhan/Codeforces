/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */

// @lc code=start
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
   
    // vector<vector<int>>v;
    // map<int, vector<int>>mp;

    // void Traversal(TreeNode * root,int level){
    //     if(root==nullptr) {
    //         return;
    //     }
    //     mp[level].push_back(root->val);
    //     Traversal(root->left,level+1);
    //     Traversal(root->right,level+1);
    // }
    // vector<vector<int>> levelOrder(TreeNode* root) {
    //         Traversal(root,0);
    //         for(auto x:mp){
    //             v.push_back(x.second);
    //         }
    //         return v;
    // }

    vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>>ans;
          if(!root) return ans;
          queue<TreeNode*>q;
          q.push(root);
          q.push(NULL);
          vector<int>note;
          while(!q.empty()){
              TreeNode* x=q.front();
              q.pop();
              if(x==NULL){
                ans.push_back(note);
                note.resize(0);
                if (q.size() > 0) {
                    q.push(NULL);
                }
              }
              else{
                  note.push_back(x->val);
                  if(root->right) q.push(root->right);
                  if(root->left) q.push(root->left);
              }
              
              
             
          }
          return ans;

    }
};
// @lc code=end

