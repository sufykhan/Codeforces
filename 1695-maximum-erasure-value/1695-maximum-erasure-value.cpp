class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        map<int,int>mp;
        int ans=0,start=0;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end() && mp[nums[i]]>=start){
                 
                 int val=pref[i]-pref[start];
                 start=mp[nums[i]]+1;
                 ans=max(ans,val);
            }    
            mp[nums[i]]=i;
        }
        int val=pref[n]-pref[start];
        ans=max(ans,val);
        return ans;
        
    }
};