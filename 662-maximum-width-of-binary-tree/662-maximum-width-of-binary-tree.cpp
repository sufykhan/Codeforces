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
    vector<int>left={};
    vector<int>right={};
    
    void recur(TreeNode* root,int val,int prev){
        left.push_back(val);
        if(root->left){
            recur(root->left,2*val,val);
        }
        else{
            if(root->right){
                recur(root->right,2*val+1,val);
            }
        }
    }
   
    void recur2(TreeNode* root,int val,int prev){
        right.push_back(val);
        if(root->right){
            recur2(root->right,2*val,val);
        }
        else{
            if(root->left){
            
                recur2(root->left,2*val-1,val);
            }
        }
    }
    int widthOfBinaryTree(TreeNode* root) {
         if (!root) return 0;
        unsigned int max = 0;
        queue<pair<TreeNode*, unsigned int>> q;
        q.push(pair<TreeNode*, unsigned int>(root, 1));
        while (!q.empty()) {
            unsigned int l = q.front().second, r = l; // right started same as left
            for (int i = 0, n = q.size(); i < n; i++) {
                TreeNode* node = q.front().first;
                r = q.front().second;
                q.pop();
                if (node->left) q.push(pair<TreeNode*,unsigned int>(node->left, r * 2));
                if (node->right) q.push(pair<TreeNode*, unsigned int>(node->right, r * 2 + 1));
            }
            max = std::max(max, r + 1 - l);
        }
        return max;
        
//         TreeNode* root1=root;
//         TreeNode* root2=root;
//         int ans=0;
        
//         recur(root1,0,0);
//         recur2(root2,1,1);
        
//         for(int i=0;i<left.size() && i<right.size();i++){
//             ans=max(ans,right[i]-left[i]);
//         }
//         return ans;
        
    }
};