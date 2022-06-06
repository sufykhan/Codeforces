class Solution {
public:
    int search(vector<int>& arr, int target) {
        
        int l=0,r=arr.size();
        int center=0;
        while(r>l){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(mid>=1 && arr[mid]<arr[mid-1]){
                center=mid;
                break;
            }
            else if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
                center=mid;
                break;
            }
            else if(arr[mid]>arr[l]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        
        if(target>arr.back()){
            l=0,r=center;
        }
        else{
            l=center,r=arr.size();
        }
        
        while(r>l){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                r=mid;
            }
            else if(arr[mid]<target){
                l=mid+1;
            }
        }
        return -1;
        
        
    }
};