class Solution {
public:
    int rob(vector<int>& nums) {
        int dp2=0;
        int dp1=nums.back();
        int curr=0;
        for(int i=nums.size()-2;i>=0;i--){
            curr=max(dp2+nums[i],dp1);
            dp2=dp1;
            dp1=curr;
        }
        return dp1;
    }
};