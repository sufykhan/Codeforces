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
    TreeNode* curr;
    int i=0;
    vector<int>v;
    void Inorder(TreeNode* node){
        if(node==nullptr) return;
        Inorder(node->left);
        v.push_back(node->val);
        Inorder(node->right);
    }
        
    BSTIterator(TreeNode* root) {
        
        Inorder(root);
        
    }
    
    int next() {
        int ans=v[i];
        i++;
        return ans;
    }
    
    bool hasNext() {
        if(i>=v.size()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */