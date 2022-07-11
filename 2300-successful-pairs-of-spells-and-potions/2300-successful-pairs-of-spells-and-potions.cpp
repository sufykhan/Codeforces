class Solution {
public:
    vector<int> successfulPairs(vector<int>&arr1, vector<int>& arr2, long long success) {
        
        
        sort(arr2.begin(),arr2.end());
        
        vector<int>ans(arr1.size(),0);
        
        for(int i=0;i<arr1.size();i++){
            int l=0,r=arr2.size()-1;
            while(r>=l){
                int mid=l+(r-l)/2;
                
                if(arr2[mid]*1LL*arr1[i]>=success){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            ans[i]=arr2.size()-r-1;
        }
        return ans;
        
        
//         sort(arr2.begin(),arr2.begin());
        
//         int n=arr2.size();
//         vector<int>fin(arr1.size(),0);
//         for(int i=0;i<arr1.size();i++){
            
//             int l=0;
//             int r=arr2.size()-1;
//             int mid;
//             while(r>=l){
//                 mid=l+(r-l)/2;
                
//                 if(arr1[i]*1LL*arr2[mid]>=success){
//                     r=mid-1;
//                 }
//                 else{
//                     l=mid+1;
//                 }
//             }
        
//             fin[i]=(n-r-1);
//         }
        
//         return fin;
        
    }
};