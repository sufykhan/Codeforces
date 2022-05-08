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
    int recur(TreeNode* root,int &cnt){
        
        if(root==nullptr){
            return 0;
        }
        int lc=0;
        int rc=0;
        int l=recur(root->left,lc);
        int r=recur(root->right,rc);
        int sum = l + r + root->val;
        cnt = lc + rc + 1;
        
        int comp=sum/cnt;
        if(comp==root->val){
            ans++;
        }
        return sum;
        
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt=0;
        int val=recur(root,cnt);
        return ans;
    }
};