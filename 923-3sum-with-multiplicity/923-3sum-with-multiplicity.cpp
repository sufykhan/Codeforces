class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        int n = arr.size();
        int mod=1e9 + 7;
        int dp[n + 1][target + 1][4];
        
         for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                for (int k = 0; k <= 3; k++) {
                    dp[i][j][k]=0;
                }
            }
         }
        
        for (int i = 0; i <= n; i++) {
            dp[i][0][0] = 1;
        }
        
        
        for (int i = 1; i <=n; i++) {
            for (int j = 0; j <= target; j++) {
                for (int k = 1; k <= 3; k++) {
                    
                    if (j-arr[i-1]>=0) {
                        dp[i][j][k] =  (dp[i-1][j][k]%mod + dp[i-1][j-arr[i-1]][k - 1]%mod)%mod;
                    }
                    else{
                        dp[i][j][k] = dp[i-1][j][k]%mod;
                    }
                }
            }
        }
        return dp[n][target][3];
        
    }
};