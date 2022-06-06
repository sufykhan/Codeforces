class Solution {
public:
    int singleNonDuplicate(vector<int>&arr) {

        int l=0,r=arr.size();
        
        if((r>1 && arr[0]!=arr[1]) || r==1){
            return arr[0];
        }
        if(r>=2&&arr[r-1]!=arr[r-2]){
            return arr[r-1];
        }
        while(r>l){
            int mid=l+(r-l)/2;
            if(mid>0 && arr[mid]==arr[mid-1]){
                if(mid%2==0){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid+1<arr.size() && arr[mid]==arr[mid+1]){
                if((mid+1)%2==0){
                    r=mid;
                }
                else{
                    l=mid+2;
                }
            }
            else if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];
            }
        }
        return -1;
    }
};