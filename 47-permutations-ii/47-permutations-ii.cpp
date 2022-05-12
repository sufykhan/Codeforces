class Solution {
public:
    void recur1(int idx,vector<int>&nums,vector<int>val,vector<vector<int>>&ans,vector<bool>&vis){
        
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
    void recur(int idx,vector<int>&nums,vector<int>val,vector<vector<int>>&ans,vector<bool>&vis){
        
        if(idx==nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            
            if(i!=idx && nums[i]==nums[idx]) {
                continue;
            }
            
            
            swap(nums[i],nums[idx]);
            recur(idx+1,nums,val,ans,vis);
            //swap(nums[i],nums[idx]);
            
        }
        for(auto x:nums) cout<<x<<" ";
        cout<<"\n";
        for (int i = nums.size() - 1; i > idx; --i) {
                swap(nums[idx], nums[i]);
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

//[[1,1,2,2],[1,2,1,2],[1,2,2,1],[1,1,2,2],[2,1,1,2],[2,1,2,1],[2,2,1,1],[2,1,1,2],[2,1,2,1],[1,1,2,2],[1,2,1,2],[1,2,2,1],[1,1,2,2]]