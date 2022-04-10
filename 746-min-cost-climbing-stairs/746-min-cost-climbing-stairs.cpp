class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
        
        int n=arr.size();
        vector<int>dp(n+1,0);
        
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+arr[i-1],dp[i-2]+arr[i-2]);
        }
        return dp[n];
    }
};