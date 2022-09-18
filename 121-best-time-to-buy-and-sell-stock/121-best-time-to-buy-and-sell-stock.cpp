class Solution {
public:
    int maxProfit(vector<int>&arr) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto x:arr){
            mini=min(mini,x);
            maxi=max(maxi,x-mini);
        }
        return maxi;
    }
};