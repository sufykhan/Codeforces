class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n=t1.size(),m=t2.size();
        vector<vector<int>>dp(2,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t1[i-1]==t2[j-1]){
                    dp[!(i%2)][j]=dp[i%2][j-1]+1;
                }
                else{
                    dp[!(i%2)][j]=max(dp[i%2][j],dp[!(i%2)][j-1]);
                }
            }
        }
        return dp[!(t1.size()%2)][m];
    }
};