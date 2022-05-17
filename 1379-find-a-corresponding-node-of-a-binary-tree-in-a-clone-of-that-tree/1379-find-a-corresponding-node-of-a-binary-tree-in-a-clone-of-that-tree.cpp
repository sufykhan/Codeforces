/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void recur(TreeNode* cloned,TreeNode* target){
        if(cloned==nullptr){
            return;
        }
        if(cloned->val==target->val){
            ans=cloned;
            return;
        }
        recur(cloned->left,target);
        recur(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        recur(cloned,target);
        return ans;
    }
};