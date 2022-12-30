class Solution {
public:
    int recur(vector<int>&cost,int idx,vector<int>&dp){
        if(idx>=cost.size()) return dp[idx]=0;
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx]=cost[idx]+min(recur(cost,idx+1,dp),recur(cost,idx+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp1(cost.size()+5,-1);
        vector<int>dp2(cost.size()+5,-1);
        int ans=min(recur(cost,0,dp1),recur(cost,1,dp2));
        return ans;
    }
};