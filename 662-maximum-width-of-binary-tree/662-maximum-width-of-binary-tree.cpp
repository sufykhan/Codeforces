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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,unsigned int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            int mini=q.front().second;
            int left,right;
            for(int i=0;i<size;i++){
                
                unsigned int curr=q.front().second-mini;
                TreeNode* root1=q.front().first;
                q.pop();
                if(i==0) left=curr;
                if(i==size-1) right=curr;
                
                if(root1->left) q.push({root1->left,2*curr+1});
                if(root1->right) q.push({root1->right,2*curr+2});
                
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};