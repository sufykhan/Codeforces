class Solution {
public:
    int minimumTotal(vector<vector<int>>&arr) {
        vector<vector<int>>dp=arr;
        int n=arr.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                dp[i][j]=INT_MAX;
                if(j!=i) dp[i][j]=dp[i-1][j];
                if(j>=1) dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
                dp[i][j]+=arr[i][j];
               // cout<<dp[i][j]<<" ";
            }
            //cout<<"\n";
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(dp[n-1][i],ans);
        }
        return ans;
    }
};