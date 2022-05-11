class Solution {
public:
    int countVowelStrings(int n) {
        
        int last=5;
        vector<vector<int>>dp(n+1,vector<int>(last+1,0));
        
        for(int i=1;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=last;i++){
            dp[1][i]=i;
        }
        
        for(int i=2;i<=n;i++){
            for(int j=1;j<=last;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
            
        }
        
        return dp[n][5];
    }
};