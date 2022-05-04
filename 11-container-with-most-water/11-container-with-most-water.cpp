class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0,j=arr.size()-1,ans=0;
        
        while(j>i){
            if(arr[i]>arr[j]){
         
                ans=max(ans,arr[j]*(j-i));
                j--;
            }    
            else{
                
                ans=max(ans,arr[i]*(j-i));
                i++;
            }
        }
        return ans;
        
    }
};