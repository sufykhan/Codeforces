class Solution {
public:
    void sortColors(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        for(int k=0;k<=j;k++){
            if(arr[k]==0){
                swap(arr[k],arr[i]);
                i++;
            }
            if(arr[k]==2){
                swap(arr[k],arr[j]);
                j--;
                k--;
            }
        }
        
    }
};