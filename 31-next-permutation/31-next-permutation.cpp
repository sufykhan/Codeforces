class Solution {
public:
    void nextPermutation(vector<int>&arr) {
        int pos=-1,n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                pos=i;
                break;
            }
        }
      
        reverse(arr.begin()+pos+1,arr.end());
        if(pos==-1){
            return;
        }
        for(int i=pos+1;i<n;i++){
            if(arr[i]>arr[pos]){
                swap(arr[i],arr[pos]);
                return;
            }
        }
    }
};