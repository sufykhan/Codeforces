class Solution {
public:
    long long int mod=4294967296;
    int combinationSum4(vector<int>& nums, int target) {
        vector<long long int>dp(target+1,0);
        dp[0]=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=target;i++){
            dp[i]=0;
            for(int j=0;j<nums.size();j++){
                if(i-nums[j]>=0){
                    dp[i]=(dp[i]+dp[i-nums[j]])%mod;
                }
                else{
                    break;
                }
            }
        }
        return dp[target];
    }
};