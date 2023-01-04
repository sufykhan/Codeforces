class Solution {
public:
    vector<long long> give(vector<int>&nums,int n){
        vector<long long>pref(n+1,0);
        vector<long long>mini(n+1,0);
        vector<long long>maxend(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
            mini[i+1]=min({mini[i],pref[i],pref[i+1]});
            maxend[i+1]=pref[i+1]-mini[i+1];
        }
        return maxend;
    }
    int maxSumAfterOperation(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<long long>maxEndleft=give(nums,n);
        reverse(nums.begin(),nums.end());
        vector<long long>maxEndright=give(nums,n);
         reverse(nums.begin(),nums.end());
        long long ans=LONG_MIN;
        for(int i=0;i<n;i++){
            long long val=nums[i]*1LL*nums[i];
            val=val+max(0LL,maxEndleft[i])+max(0LL,maxEndright[n-i-1]);
            ans=max(ans,val);
        }
        
        return ans;
        
    }
};