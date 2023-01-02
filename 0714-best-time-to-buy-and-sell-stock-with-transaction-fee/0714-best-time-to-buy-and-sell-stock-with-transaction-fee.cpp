class Solution {
public:
    int dp[50005][2];
    int recur(int idx,int buy,vector<int>&nums,int k){
        
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        int ans=0;
        if(buy==1) ans=-nums[idx]+recur(idx+1,0,nums,k);
        else ans=+nums[idx]-k+recur(idx+1,1,nums,k);
        return dp[idx][buy]=max(recur(idx+1,buy,nums,k),ans);
    
        
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof(dp));
        return recur(0,1,prices,fee);
        
    }
};