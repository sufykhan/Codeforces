class Solution {
public:
    int dp[105][4];
    int recur(int idx,int choice,vector<vector<int>>costs){
        if(idx>=costs.size()) return 0;
        if(dp[idx][choice]!=-1) return dp[idx][choice];
        int ans=INT_MAX;
        for(int i=0;i<=2;i++){
            if(i!=choice){
                ans=min(ans,costs[idx][i]+recur(idx+1,i,costs));
            }
        }
        return dp[idx][choice]=ans;
    }
    int minCost(vector<vector<int>>& costs) {
        memset(dp,-1,sizeof(dp));
        return recur(0,3,costs); 
    }
};