class Solution {
public:
    void recur(int idx,vector<int>&nums,vector<int>val,vector<vector<int>>&ans,vector<bool>&vis){
        
        if(val.size()==nums.size()) {
            ans.push_back(val);
            return;
        }
        for(int i=0;i<nums.size();i++){
            
            if(i!=0 && nums[i]==nums[i-1] && vis[i]==vis[i-1]){
                continue;
            }
            if(!vis[i]){
                val.push_back(nums[i]);
                vis[i]=true;
                recur(idx+1,nums,val,ans,vis);
                vis[i]=false;
                val.pop_back();
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>val;
        vector<vector<int>>ans;
        vector<bool>vis(nums.size(),false);
        recur(0,nums,val,ans,vis);
        return ans;
    }
};