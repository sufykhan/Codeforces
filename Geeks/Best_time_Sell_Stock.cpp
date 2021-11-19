class Solution {
public:
    int maxProfit(vector<int>&arr) {
    int mini=INT_MAX,maxi=0; 
    for(int i=0;i<arr.size();i++){
      mini=min(mini,arr[i]);
      maxi=max(arr[i]-mini,maxi);
    }
        return maxi;
           
    }
};