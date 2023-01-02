class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,0);
        dp[(int)nums.size()-1]=nums.back();
        for(int i=nums.size()-2;i>=0;i--){
            dp[i]=max(dp[i+2]+nums[i],dp[i+1]);
        }
        return dp[0];
    }
};