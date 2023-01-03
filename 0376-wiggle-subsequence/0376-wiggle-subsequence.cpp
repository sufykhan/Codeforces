class Solution {
public:
    int dp[1001][1001][2];
    int recur(int idx,int flg,int prev,vector<int>&nums){
        
        if(idx==nums.size()) return 0;
        
        if(dp[idx][prev][flg]!=-1){
            return dp[idx][prev][flg];
        }
        
        int ans=recur(idx+1,flg,prev,nums);
        if(flg==0){
            if(prev==-1 || nums[idx]>nums[prev]){
                ans=max(ans,1+recur(idx+1,1,idx,nums));
            }
        }
        else{
            if(prev==-1 || nums[idx]<nums[prev]){
                ans=max(ans,1+recur(idx+1,0,idx,nums));
            }  
        }
        return dp[idx][prev][flg]=ans;
        
    }
    int wiggleMaxLength(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int v1=recur(0,0,0,nums);
        memset(dp,-1,sizeof(dp));
        int v2=recur(0,1,0,nums);
        return 1+max(v1,v2);
    }
};