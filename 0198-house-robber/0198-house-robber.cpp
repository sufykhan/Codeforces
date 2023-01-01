class Solution {
public:
    int dp[105];
    int recur(int idx,vector<int>&nums){
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx]=max(nums[idx]+recur(idx+2,nums),recur(idx+1,nums));
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return recur(0,nums);
    }
};