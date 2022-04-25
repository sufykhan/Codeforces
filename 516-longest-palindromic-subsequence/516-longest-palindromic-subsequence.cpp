class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1));
        for(int i=0;i<=n;i++){
            dp[1][i]=1;
        }
     
        for(int len=2;len<=n;len++){
            for(int j=0;j<n-len+1;j++){
                if(s[j]==s[len+j-1]){
                    dp[len][j]=2+dp[len-2][j+1];
                }
                else{
                    dp[len][j]=max(dp[len-1][j+1],dp[len-1][j]);
                }
            }
        }
        return dp[n][0];
        
    }
};
