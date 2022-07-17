class Solution {
public:
    //int dp[1001][1001];
  
    //int recur(int n,int k){
    //     if(n==0){
    //          return 0;
    //      }  
    //      if(k==0){
    //          return 1;
    //      }
    //      if(dp[n][k]!=-1) return dp[n][k];
    //      int ans=0;
    //      for(int i=0;i<=min(k,n-1);i++){  //this is shifting of nth number towards right by ith amount
    //          ans=(ans+recur(n-1,k-i))%1000000007;
    //      }
    //      return dp[n][k]=ans;
    // }
    int kInversePairs(int n, int k) {
        int mod=1000000007;
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(j==0) dp[i][j]=1;
                else{
                    int pref=(dp[i-1][j]+mod-((j-i)>=0?dp[i-1][j-i]:0))%mod;
                    dp[i][j]=(dp[i][j-1]+pref)%mod;
                }
            }
        }
        return (dp[n][k]+mod-(k>0?dp[n][k-1]:0))%mod;
    }
};