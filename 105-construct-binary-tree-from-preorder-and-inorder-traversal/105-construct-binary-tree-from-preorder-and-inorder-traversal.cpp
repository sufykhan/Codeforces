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
    vector<int>pre;
    vector<int>in;

    TreeNode* recur(int &root,int l,int r){  //Keenly understand why pass by reference is used in root: To update the root all the time after left to right call
        if(l>r) return nullptr;
        int piv=l;
        while(pre[root]!=in[piv]) piv++;
        TreeNode* ans=new TreeNode(in[piv]);
        root++;
        ans->left=recur(root,l,piv-1);
        ans->right=recur(root,piv+1,r);
        return ans;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        pre=preorder;
        in=inorder;
        int root=0,l=0,r=pre.size()-1;
        return recur(root,l,r);
    }
};
