class Solution {
public:
    
    int util(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
        
        if(j>i){
            return 0;
        }
        if(i==arr.size()){
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=arr[i][j]+min(util(i+1,j,arr,dp),util(i+1,j+1,arr,dp));
        
        
    }
    
    int minimumTotal(vector<vector<int>>& arr) {
        
        int i=0,j=0;
        vector<vector<int>>dp(arr.size(),vector<int>(arr.size(),-1));
        
        return util(i,j,arr,dp);
        
    }
};