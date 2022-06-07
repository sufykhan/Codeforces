class Solution {
public:
    int threeSumClosest(vector<int>&arr, int target) {
        
        sort(arr.begin(),arr.end());
        int ans;
        int err=INT_MAX;
        for(int i=0;i<arr.size();i++){
            int l=i+1,r=arr.size()-1,val=target-arr[i];
            //cout<<val<<" ";
            while(r>l){
                if(arr[l]+arr[r]==val){
                    return target;
                }
                if(arr[l]+arr[r]>val){
                    if(err>(arr[l]+arr[r]-val)){
                        err=arr[l]+arr[r]-val;
                       // cout<<err<<" ";
                        ans=arr[l]+arr[r]+arr[i];
                    }
                    r--;
                }
                else {
                    if(err>(val-(arr[l]+arr[r]))){
                        err=val-(arr[l]+arr[r]);
                        ans=arr[l]+arr[r]+arr[i];
                    }
                    l++;
                }
            }
        }
        return ans;
        
    }
};