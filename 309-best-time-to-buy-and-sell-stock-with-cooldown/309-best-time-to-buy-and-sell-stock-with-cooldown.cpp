class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,0));
        int n=prices.size();
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                if(j==0){
                    dp[i][j]=max(-prices[i]+dp[i+1][j+1],dp[i+1][j]);
                }
                else{
                    dp[i][j]=max(prices[i]+(i+2>=n?0:dp[i+2][j-1]),dp[i+1][j]);
                }
            }
        }
        return dp[0][0];
    }
};
