class Solution {
public:
  
   
    int recur(vector<int>&nums,vector<int>&mul,int st,int idx,vector<vector<int>>&dp){
        
        if(idx==mul.size()){
            return 0;
        }
         
        if(dp[st][idx]!=INT_MIN) return dp[st][idx];
        
        int l=mul[idx]*nums[st]+recur(nums,mul,st+1,idx+1,dp);
        int r=mul[idx]*nums[nums.size()-1-(idx-st)]+recur(nums,mul,st,idx+1,dp);
        
        return dp[st][idx]=max(l,r);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n=nums.size();
      
        vector<vector<int>>dp(mul.size()+1,vector<int>(mul.size()+1,INT_MIN));
        return recur(nums,mul,0,0,dp);
        
    }
};