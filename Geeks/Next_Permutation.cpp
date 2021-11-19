class Solution {
public:
    void nextPermutation(vector<int>&arr) {
    int pos=-1,n=arr.size(),val=-1,swapper=-1;
    for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        pos=i;
        val=arr[i];
        break;
    }      
    }
    if(pos==-1) {
        sort(arr.begin(),arr.end());return;
    }
    sort(arr.begin()+pos+1,arr.end());
    for(int i=pos+1;i<n;i++){
        if(arr[i]>val){
            swap(arr[i],arr[pos]);
            break;
        }
    }
    sort(arr.begin()+pos+1,arr.end());
    }
};