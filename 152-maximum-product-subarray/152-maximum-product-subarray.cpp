class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=0,r=0;int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            l=(l?l:1)*nums[i];
            r=(r?r:1)*nums[nums.size()-i-1];
            maxi=max(maxi,max(l,r));
        }
        return maxi;
    }
};