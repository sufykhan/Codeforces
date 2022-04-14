class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& arr) {
        int n=arr.size();
        
        vector<int>rmax(n+1,INT_MIN);
        for(int i=n-1;i>=0;i--){
            rmax[i]=max(rmax[i+1],arr[i]-i);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(arr[i]+i+rmax[i+1],ans);
        }
        return ans;
    }
};