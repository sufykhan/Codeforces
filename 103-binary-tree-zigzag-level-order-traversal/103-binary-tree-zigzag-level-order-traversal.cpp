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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int i1=0;
        while(!q.empty()){
            i1++;
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode* root1=q.front();
                q.pop();
                v.push_back(root1->val);
                if(root1->left) q.push(root1->left);
                if(root1->right) q.push(root1->right);
            }
            if(i1%2==0) reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        return ans;
    }
};