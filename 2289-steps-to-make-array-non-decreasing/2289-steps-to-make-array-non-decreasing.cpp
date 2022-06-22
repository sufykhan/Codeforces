class Solution {
public:
    int totalSteps(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
        stack<int>st;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
           
            while(!st.empty()&&nums[i]>nums[st.top()]){
                dp[i]=max(++dp[i],dp[st.top()]);
                st.pop();
                ans=max(ans,dp[i]);
            }
            st.push(i);
            
        }
       
        return ans;
    }
};