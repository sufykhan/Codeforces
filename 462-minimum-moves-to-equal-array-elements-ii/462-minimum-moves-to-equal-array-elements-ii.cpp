class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long int sum=0,mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(auto& x:nums){
            sum+=x;
        }
        int n=nums.size();
        vector<long long int>pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        for(int i=1;i<=n;i++){
            long long int comp=nums[i-1]*1LL*i-(pref[i]-pref[0]);
            comp+=pref[n]-pref[i]-nums[i-1]*1LL*(n-i);
            mini=min(mini,comp);
        }
        return mini;
    }
};