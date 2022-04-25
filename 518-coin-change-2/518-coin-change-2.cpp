class Solution {
public:
    int change(int amount, vector<int>& arr) {
        int n=arr.size();
        int m=amount;
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int k=1;k<=m;k++){
            for(int i=1;i<=n;i++){
                dp[i][k]=dp[i-1][k];
                if(k-arr[i-1]>=0){
                    dp[i][k]+=dp[i][k-arr[i-1]];
                }
               
            }
        }
        return dp[n][m];
        
    }
};