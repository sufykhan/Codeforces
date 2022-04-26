class Solution {
public:
    int numSquares(int n) {
       
        vector <int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for(int sq=1; sq<=n; sq++) {
            for(int i=1; i*i<=sq; i++) {
                dp[sq] = min(dp[sq], dp[sq-(i*i)]+1);
            }
        }
        return dp[n];
    }
};