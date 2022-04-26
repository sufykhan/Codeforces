class Solution {
public:
    int integerBreak(int n) {
        if(n<=3) return n-1;
        n++;
        vector <int> dp(n+3,0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2]=1;
        for(int sq=3; sq<=n; sq++) {
            for(int i=1; i<=sq; i++) {
                dp[sq] = max(dp[sq], dp[sq-i]*i);
            }
        }
        return dp[n];
    }
};