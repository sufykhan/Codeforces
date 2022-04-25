class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size(); 
        vector<vector<int>>dp(n,vector<int>(2,1));
        
        int ans=1;
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    dp[i][1]=max(dp[i][1],1+dp[j][0]);
                }
                else if(nums[j]<nums[i]){
                    dp[i][0]=max(dp[i][0],1+dp[j][1]);
                }
            } 
            ans=max(ans,max(dp[i][0],dp[i][1]));
        }
        return ans;
    }
};