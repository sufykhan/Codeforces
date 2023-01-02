class Solution {
public:
    
    int minCost(vector<vector<int>>& cost) {
        int n=cost.size();
        vector<vector<int>>dp(n+1,vector<int>(3,0));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=2;j++){
                int mini=INT_MAX;
                for(int k=0;k<=2;k++){
                    if(k!=j) mini=min(mini,cost[i][j]+dp[i+1][k]);
                }
                dp[i][j]=mini;
            }
            
        }
        return min({dp[0][0],dp[0][1],dp[0][2]});
    }
};