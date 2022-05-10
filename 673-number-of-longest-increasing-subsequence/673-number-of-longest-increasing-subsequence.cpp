class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
        
        
        int n=arr.size();
        vector<int>dp(n+1,1);
        vector<int>dp2(n+1,1);
        int maxi=1,ans=0;
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        dp2[i]=dp2[j];
                    }
                    else if(dp[i]==dp[j]+1){
                        dp2[i]=dp2[i]+dp2[j];
                    }
                }
            }
            maxi=max(dp[i],maxi);
        }
        
        for(int i=0;i<n;i++){
            if(dp[i]==maxi){
                ans+=dp2[i];
            }
            //cout<<dp[i]<<" ";
        }
        return ans;
    }
};