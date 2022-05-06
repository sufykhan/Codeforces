class Solution {
public:
    
    void recur(int i,vector<int>&nums,vector<int>val,vector<vector<int>>&ans){
        
        if(i>=nums.size()){
            ans.push_back(val);
            return;
        }
        val.push_back(nums[i]);
        recur(i+1,nums,val,ans);
        val.pop_back();
        recur(i+1,nums,val,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>val;
        recur(0,nums,val,ans);
        return ans;
    }
};