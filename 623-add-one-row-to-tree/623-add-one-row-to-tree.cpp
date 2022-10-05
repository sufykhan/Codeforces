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
    int k;
    int val;
    void recur(TreeNode* root,int depth){
        if(root==nullptr) return;
        if(depth+1==k){
            TreeNode* lefty=root->left;
            TreeNode* righty=root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=lefty;
            root->right->right=righty;
            return;
        }
        recur(root->left,depth+1);
        recur(root->right,depth+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        k=depth;
        this->val=val;
        TreeNode* ans=root;
        if(depth==1){
            TreeNode* edge=new TreeNode(val);
            edge->left=root;
            return edge;
        }
        recur(root,1);
        return ans;
    }
};