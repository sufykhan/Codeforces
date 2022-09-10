class Solution {
public:
    int recur(int idx,int k,bool buy,vector<int>&prices, vector<vector<vector<int>>>&dp){
        if(idx>=prices.size() ||  k<=0){
            return 0;
        }
        if(dp[idx][k][buy]!=-1) return dp[idx][k][buy];
        int ans;
        if(buy){
            ans=max(recur(idx+1,k,buy,prices,dp),-prices[idx]+recur(idx+1,k,!buy,prices,dp));
        }
        else{
            ans=max(recur(idx+1,k,buy,prices,dp),prices[idx]+recur(idx+1,k-1,!buy,prices,dp));
        }
        return dp[idx][k][buy]=ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        

        
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(k+1,vector<int>(2,-1)));
        
        return recur(0,k,1,prices,dp);
    }
};