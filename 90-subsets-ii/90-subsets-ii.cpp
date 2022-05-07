class Solution {
public:
    void recur(int idx,vector<int>&nums,vector<int>val,vector<vector<int>>&ans){
        
        ans.push_back(val);
            
        for(int i=idx;i<nums.size();i++){
            
            if(i!=idx && nums[i]==nums[i-1]) continue;
            val.push_back(nums[i]);
            recur(i+1,nums,val,ans);
            val.pop_back();
        }
       
       
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>val;
        recur(0,nums,val,ans);
        return ans;
    
    }
};