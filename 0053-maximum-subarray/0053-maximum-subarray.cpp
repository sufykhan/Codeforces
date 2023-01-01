class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        vector<int>pref((int)nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            pref[i+1]=pref[i]+nums[i];
        }
        int maxi=INT_MIN;
        int ans=INT_MIN;
        for(int i=nums.size();i>0;i--){
           
            ans=max(ans,pref[i]);
            if(maxi!=INT_MIN) ans=max(ans,maxi-pref[i]);
            maxi=max(maxi,pref[i]);
        }
        
        return ans;
        
    }
};