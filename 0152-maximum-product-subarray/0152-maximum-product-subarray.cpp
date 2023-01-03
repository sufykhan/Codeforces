class Solution {
public:
    int getMax(vector<int>nums){
        int maxi=INT_MIN,val=1;
        for(auto x:nums){
            val=val*x;
            maxi=max(maxi,val);
            if(x==0){
                val=1;
            }
        }
        return maxi;
    }
    int maxProduct(vector<int>& nums) {
        int ans=getMax(nums);
        reverse(nums.begin(),nums.end());
        ans=max(ans,getMax(nums));
        return ans;
    }
};