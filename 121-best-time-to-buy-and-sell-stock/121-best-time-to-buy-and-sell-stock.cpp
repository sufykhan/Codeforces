class Solution {
public:
    int maxProfit(vector<int>&arr) {
        int maxi=0,sum=0;
        for(int i=1;i<arr.size();i++){
            int x=arr[i]-arr[i-1];
            if(sum+x>=0){
                sum+=x;
                maxi=max(sum,maxi);
            }
            else{
                sum=0;
            }
        }
        return maxi;
    }
};