//https://leetcode.com/contest/biweekly-contest-74/problems/minimum-white-tiles-after-covering-with-carpets/

//Type:DP
class Solution {
public:
    int minimumWhiteTiles(string s, int m, int w) {
     
        int n=s.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=s[i]-'0';
            dp[i][0]=cnt;    //if number of cover are zero then for covering i size of array ,visible 1 is total cnt of "1" in array;  
        }
        for(int i=0;i<=m;i++){
            dp[0][i]=0;      //if size of array is zero, visible "1" are 0; 
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                int val=INT_MAX;
                if(j>=1){
                    val=dp[max(0,i-w)][j-1];    //If we include the cover of size w
                }
                dp[i][j]=min(dp[i-1][j]+s[i-1]-'0',val);
            }
        }
        return dp[n][m];
    }
    
};

