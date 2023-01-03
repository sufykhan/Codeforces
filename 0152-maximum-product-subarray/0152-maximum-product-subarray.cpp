class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=1,mini=1,ans=INT_MIN;
        for(auto x:nums){
            int temp=max({x,maxi*x,mini*x});
            mini=min({x,maxi*x,mini*x});
            maxi=temp;
            ans=max(ans,maxi);
        }
        return ans;
    }
};