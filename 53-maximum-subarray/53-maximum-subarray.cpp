class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //pref[y](max)-pref[x](min)=maximum
        int pref=0,maxi=INT_MIN,minP=INT_MAX;
        for(int i=0;i<nums.size();i++){
            minP=min(minP,pref);
            pref+=nums[i];
            maxi=max(maxi,pref-minP);
        }
        return maxi;
    }
};