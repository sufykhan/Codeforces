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
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int dept=0;

    void recur(TreeNode* root,int val,int prev){
        mini=min(mini,val);
        maxi=max(maxi,val);
        dept=max(prev,dept);
        if(root->left){
            recur(root->left,val-1,prev+1);
        }
        if(root->right){
                recur(root->right,val+1,prev+1);
        }
    }
    void recur2(TreeNode* root,int val,vector<vector<vector<int>>>&ans2,int prev){
        ans2[prev][val].push_back(root->val);
        if(root->left){
            recur2(root->left,val-1,ans2,prev+1);
        }
        if(root->right){
            recur2(root->right,val+1,ans2,prev+1);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        TreeNode* root1=root;
        recur(root1,0,0);
        
        int newVal=abs(mini);
        int size=maxi-mini+1;
        
        
        vector<vector<vector<int>>>ans2(dept+1,vector<vector<int>>(size,vector<int>()));
    
        
        recur2(root,newVal,ans2,0);
        
        for(int i=0;i<=dept;i++){
            for(int j=0;j<size;j++){
                sort(ans2[i][j].begin(),ans2[i][j].end());
            }
        }
        vector<vector<int>>ans(size,vector<int>());
        
        for(int i=0;i<size;i++){
            for(int j=0;j<=dept;j++){
                for(int k=0;k<ans2[j][i].size();k++){
                    ans[i].push_back(ans2[j][i][k]);
                }
            }
            
        }
        return ans;
    }
};