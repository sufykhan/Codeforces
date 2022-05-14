class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        vector<long long>pref(nums.size()+1,0);
        int ans=0;
        for(int i=1;i<pref.size();i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        int n=nums.size();
        for(int i=1;i<n;i++){
            long long back=pref[n]-pref[i];
            long long forw=pref[i];
            if(forw>=back){
                ans++;
            }
        }
        return ans;
        
    }
};