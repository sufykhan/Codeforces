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
    int dept=INT_MIN;
    void recur(TreeNode* root,int level){ 
        if(root==nullptr){
            return ;
        }
         dept=max(dept,level);
         recur(root->left,level+1);
         recur(root->right,level+1);
    }
    void recur2(TreeNode* root,int level,vector<long long int>&ans,vector<long long int>&cnt){
        if(root==nullptr){
            return ;
        }
        ans[level]+=root->val;
        cnt[level]++;
        recur2(root->left,level+1,ans,cnt);
        recur2(root->right,level+1,ans,cnt);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int level=0;
        recur(root,level);
        vector<long long int>ans(dept+1,0);
        vector<long long int>cnt(dept+1,0);
        recur2(root,level,ans,cnt);
        vector<double>fin(dept+1);
        for(int i=0;i<=dept;i++){
            fin[i]= (double)ans[i]/cnt[i];
        }
        return fin;
    }
};