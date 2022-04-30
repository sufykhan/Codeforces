class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long pref[nums.size()+1];
        pref[0]=0;
        for(int i=1;i<=nums.size();i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        long long maxi=LLONG_MAX;
        int pos=-1;
        for(int i=1;i<=n;i++){
            long long ans;
            if(n-i==0) ans=abs( (long long)pref[i]/i);
            else ans= abs( (long long)pref[i]/i - (long long)(pref[n]-pref[i])/(n-i));
           // cout<<ans<<" ";
            if(maxi>ans){
                
                pos=i-1;
                maxi=ans;
            }
            
        }
        return pos;
        
    }
};