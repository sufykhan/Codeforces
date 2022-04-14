class Solution {
public:
    int maxProfit(vector<int>&arr) {
    int currM=0,globalM=0;
    for(int i=1;i<arr.size();i++){
      currM=max(0,currM+=arr[i]-arr[i-1]);
      globalM=max(currM,globalM);
    }
    return globalM;
           
    }
};