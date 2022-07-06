class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
      
        map<int,int>mp;
        int prev1=0,prev2;
        mp[prev1]=1;
        for(int i=1;i<=nums.size();i++){
            prev2=prev1+nums[i-1];
            int tar=prev2-k;
            if(mp.find(tar)!=mp.end()){
                ans+=mp[tar];
            }
            mp[prev2]++;
            prev1=prev2;
        }
    
        return ans;
    }
};