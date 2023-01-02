class Solution {
public:
    int minCostII(vector<vector<int>>& cost) {
        int n=cost.size();
        int m=cost[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m,0));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<m;j++){
                int mini=INT_MAX;
                for(int k=0;k<m;k++){
                    if(k!=j) mini=min(mini,cost[i][j]+dp[i+1][k]);
                }
                dp[i][j]=mini;
            }
            
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,dp[0][i]);
        }
        return ans;
    }
};