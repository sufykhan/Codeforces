class Solution {
public:
    int dp[1001][1001];
    int ans=INT_MIN;
    int recur(int i,int j,vector<int>&nums1,vector<int>&nums2){
        
        if(i>=nums1.size() || j>=nums2.size()){
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        int curr=0;
        if(nums1[i]==nums2[j]){
            curr=1+recur(i+1,j+1,nums1,nums2);
        }
        
        recur(i,j+1,nums1,nums2);
        recur(i+1,j,nums1,nums2);
        
        ans=max(ans,curr);
        
        return dp[i][j]=curr;
        
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        recur(0,0,nums1,nums2);
        return ans;
        
    }
};