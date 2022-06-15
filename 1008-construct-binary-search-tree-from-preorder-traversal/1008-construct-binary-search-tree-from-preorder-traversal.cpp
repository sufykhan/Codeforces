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
    int i=0;
    
    TreeNode* recur(vector<int>&arr,int bound){
        if(i==arr.size() || bound<arr[i]){
            return NULL;
        }
        TreeNode* root=new TreeNode(arr[i++]);
        root->left=recur(arr,root->val);
        root->right=recur(arr,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& arr) {
      return recur(arr,INT_MAX);   
    }
};