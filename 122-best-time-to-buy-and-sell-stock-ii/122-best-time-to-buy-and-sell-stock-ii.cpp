class Solution {
public:
    int maxProfit(vector<int>&arr) {
        
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n;i++){
            
            int x=arr[i]-arr[i-1];
            if(x>0){
                ans+=x;
            }
            
        }
        return ans;
    }
};