class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        map<int,int>mp;
        int n1=nums.size();
        set<int>s;
        for(int i=0;i<n1;i++){
            mp[nums[i]]+=nums[i];
            s.insert(nums[i]);
        }
        vector<int>arr;
        for(auto x:s){
            arr.push_back(x);
        }
       
        int n=arr.size();
        
        vector<int>dp(n+1,0);
        
        dp[1]=mp[arr[0]];
        
        for(int i=2;i<=n;i++){
            
            if(arr[i-2]+1==arr[i-1]){
                dp[i]=max(dp[i-2]+mp[arr[i-1]],dp[i-1]);
            }
            else{
                dp[i]=dp[i-1]+mp[arr[i-1]];
            }
            
        }
        
        return dp[n];
        
    }
};