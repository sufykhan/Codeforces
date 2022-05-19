class Solution {
public:
    
    int longestConsecutive(vector<int>&nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>dp;
       
        int i=0;
        for(auto x:nums){
            //cout<<x<<" ";
            mp[x]=i;
            dp[x]=0;
            i++;
        }
        
        int n=nums.size();int maxi=0,cnt=0;
        for(int i=0;i<n;i++){
            int xx=nums[i];
            if(dp[xx]!=0){
                continue;
            }
            mp[xx]=-1;
            cnt=1;
            while(mp.find(xx+1)!=mp.end() && mp[xx+1]!=-1){
                cnt+=1;
                mp[xx+1]=-1;
                xx+=1;
            }
            if(mp[xx+1]==-1){
                dp[xx]=dp[xx+1]+1;
            }
            else {
                dp[xx]=1;
            }
            for(int j=xx;j>nums[i];j--){
                dp[j-1]=dp[j]+1;
                cout<<"xx->"<<j<<"-->"<<dp[j]<<" ,";
            }
            cout<<"\n";
            maxi=max(maxi,dp[nums[i]]);
       
        }
        return maxi;
    }
};