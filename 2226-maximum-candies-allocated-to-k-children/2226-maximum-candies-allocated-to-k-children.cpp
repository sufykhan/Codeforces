class Solution {
public:
    
    long long compare(vector<int>arr,int k){
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=1LL*arr[i]/k;
        }
        return ans;
    }
    
    int maximumCandies(vector<int>& arr, long long k) {
        
        int l=1,r=1e7;
        int ans=0;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(compare(arr,mid)>=k){
                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
        
    }
};