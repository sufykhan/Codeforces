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
    void recur(TreeNode* root,string& s){
        
        if(root==nullptr){
            s+="()";
            return;
        }
        
        s+='(';
        s+=to_string(root->val);
        
        recur(root->left,s);
        recur(root->right,s);
        
        if(root->left ==nullptr && root->right==nullptr) {
            for(int i=0;i<4;i++) s.pop_back();
            //"(1(2(4()())())(3()()))"
        }
        if(root->left && root->right==nullptr) {
            for(int i=0;i<2;i++) s.pop_back();
            //"(1(2(4()())())(3()()))"
        }
        s+=')';
        
    }
    string tree2str(TreeNode* root) {
        string s="";
        recur(root,s);
        s.pop_back();
        s.erase(s.begin());
        return s;
    }
};