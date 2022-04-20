class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        vector<vector<int>>dp(arr.size(),vector<int>(arr[0].size(),0));
        
        for(int i=0;i<arr.size();i++){
            if(arr[i][0]==0){
                dp[i][0]=1;
            }
            else{
                break;
            }
        }
        for(int i=0;i<arr[0].size();i++){
            if(arr[0][i]==0){
                dp[0][i]=1;
            }
            else{
                break;
            }
        }
        
        for(int i=1;i<arr.size();i++){
            for(int j=1;j<arr[0].size();j++){
                
                if(arr[i][j]==1){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
                
            }
        }
        return dp[arr.size()-1][arr[0].size()-1];
    }
};