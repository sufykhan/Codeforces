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
    int dept=0;
    int tot=0;
    TreeNode* ans=nullptr;
    void recur(TreeNode* root,int level){
        if(root==nullptr) return;
        dept=max(dept,level);
        recur(root->left,level+1);
        recur(root->right,level+1);
    }
    void recur2(TreeNode* root,int level){
        if(root==nullptr) return;
        if(level==dept) tot++;
        recur2(root->left,level+1);
        recur2(root->right,level+1);
    }
    int recur3(TreeNode* root,int level){
        if(root==nullptr) return 0; 
        
        if(level==dept && tot==1) ans=root;
        
        if(level==dept) return 1;
        
        int tl=recur3(root->left,level+1);
        int tr=recur3(root->right,level+1);
        
        //cout<<root->val<<"-->"<<tl+tr<<"\n";
        if(tl+tr==tot){
            if(ans==nullptr) ans=root;
        } 
        
        return tl+tr;
        
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        recur(root,0); //get the max dept
        recur2(root,0); //get total number of deepest leave nodes
        int x=recur3(root,0); // find the subtree
        return ans;
    }
};