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
class BSTIterator {
public:
    int curr=0;
    vector<int>v;
    
    void ino(TreeNode* root){
        if(root==nullptr){
            return;
        }
        ino(root->left);
        v.push_back(root->val);
        ino(root->right);
    }
    BSTIterator(TreeNode* root) {
        ino(root);
    }
    
    int next() {
        int x=v[curr];
        curr++;
        return x;
    }
    
    bool hasNext() {
        return (curr<v.size());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */