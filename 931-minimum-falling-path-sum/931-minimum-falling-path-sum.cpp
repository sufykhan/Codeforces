class Solution {
public:
    int util(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
        
        if(i>=arr.size() || j>=arr[0].size() || i<0 || j<0){
            return INT_MAX;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int val=min(util(i+1,j,arr,dp),min(util(i+1,j+1,arr,dp),util(i+1,j-1,arr,dp)));
        if(val==INT_MAX) val=0;
        dp[i][j]=arr[i][j]+ val;
        return dp[i][j];
        
        
    }
    int minFallingPathSum(vector<vector<int>>& arr) {
        
        int ans=INT_MAX;int i=0;
        for(int j=0;j<arr[0].size();j++){
            vector<vector<int>>dp(arr.size(),vector<int>(arr.size(),-1));
            ans=min(ans,util(i,j,arr,dp));
        }
        return ans;
      
    }
};