class Solution {
public:
    long long cnt(string s1,string s2){
        int n=s1.length(),m=s2.length();
        long long dp[n+1][m+1];
        
        for(int j=0;j<=m;j++){
            dp[0][j]=0LL;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1LL;
        }
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
    long long numberOfWays(string s) {
        long long ans=cnt(s,"101")+cnt(s,"010");
        return ans;
        
    }
};