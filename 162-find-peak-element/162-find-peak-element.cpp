class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int l=0,r=nums.size()-1;
     
         int mid;
         if(r==0){
             return 0;
         }
         if(r==1){
             return nums[1]>nums[0];
         }
         while(r>l){
             mid=l+(r-l)/2;
             if(mid+1<nums.size()&&nums[mid]>nums[mid+1]){
                 r=mid;
             }
             else{
                 l=mid+1;
             }
             
         }
        return l;
    }
};
