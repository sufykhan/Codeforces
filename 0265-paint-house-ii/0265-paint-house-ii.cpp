class Solution {
public:
    int minCostII(vector<vector<int>>& cost) {
        int n=cost.size();
        int m=cost[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m,0));
        for(int i=n-1;i>=0;i--){
            int fmin=INT_MAX,smin=INT_MAX;
            int pos=-1;
            for(int j=0;j<m;j++){
               if(fmin>dp[i+1][j]) smin=fmin,fmin=dp[i+1][j],pos=j;
               else if(smin>dp[i+1][j]) smin=dp[i+1][j];
            }
            for(int j=0;j<m;j++){
                
                if(pos!=j) dp[i][j]=cost[i][j]+fmin;
                else dp[i][j]=cost[i][j]+smin;
                
            }
            
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,dp[0][i]);
        }
        return ans;
    }
};