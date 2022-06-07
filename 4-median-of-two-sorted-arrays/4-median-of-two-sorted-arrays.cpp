class Solution {
public:
    int findKth(vector<int>&arr1,int n,vector<int>&arr2,int m, int k){
        if(n>m){
            findKth(arr2,m,arr1,n,k);
        }
        int l=max(0,k-m),r=min(n,k);
        while(r>=l){
            int cut1=l+(r-l)/2;
            int cut2=k-cut1;
            int l1=cut1==0?INT_MIN:arr1[cut1-1];
            int l2=cut2==0?INT_MIN:arr2[cut2-1];
            int r1=cut1==n?INT_MAX:arr1[cut1];
            int r2=cut2==m?INT_MAX:arr2[cut2];
            
            if(l1<=r2&&l2<=r1){
                int ans=max(l1,l2);
                return ans;
            }
            else if(l1>r2){
                r=cut1-1;
            }
           
            else{
                l=cut1+1;
            }
        }
        return 0;
        
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         
        int n=nums1.size();
        int m=nums2.size();
        int val=(n+m+1)/2;
        double ans;
        ans=findKth(nums1,n,nums2,m,val);
        if((n+m)%2==0){
           ans=(ans+findKth(nums1,n,nums2,m,val+1))/2;
        }
        else{
            ans=findKth(nums1,n,nums2,m,val);
        }
        return ans;
        
    }
};