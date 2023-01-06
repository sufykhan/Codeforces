class Solution {
public:
    int minimumDeleteSum(string t1, string t2) {
        int n=t1.size(),m=t2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            dp[i][0]=dp[i-1][0]+t1[i-1];
        }
        for(int i=1;i<=m;i++){
            dp[0][i]=dp[0][i-1]+t2[i-1];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t1[i-1]==t2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i-1][j]+t1[i-1],dp[i][j-1]+t2[j-1]);
                }
            }
        }
        return dp[n][m];
    }
};