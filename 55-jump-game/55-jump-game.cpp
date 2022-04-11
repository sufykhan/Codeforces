class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,0);
        dp[0]=arr[0];
        
        
        for(int i=1;i<n;i++){
            
            if(dp[i-1]<i){
                return false;
            }
            dp[i]=max(dp[i-1],i+arr[i]);
            
            if(dp[i]>=n-1){
                return true;
            }
        }
        
        return true;
        
        
    }
};