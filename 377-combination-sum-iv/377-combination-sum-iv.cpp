class Solution {
public:
    int combinationSum4(vector<int>& nums, int K) {
        
      
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long int> dp(K+3);
        dp[0]=1;
        for(int k=1;k<=K;k++){
            dp[k]=0;
            for(int i=1;i<=n;i++){
                if(nums[i-1]<=k){
                    dp[k]+=dp[k-nums[i-1]];
                }
                else{
                    break;
                }
            }
            if(dp[k]>=100000000000000000){
                dp[k]=1;
            }
            //cout<<dp[k]<<" ";
        }
        return (int)dp[K];
        
    }
};