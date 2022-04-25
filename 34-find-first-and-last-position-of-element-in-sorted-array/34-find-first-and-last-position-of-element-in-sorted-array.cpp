class Solution {
public:
    int bin1(vector<int>nums,int target){
        int l=0,r=nums.size();
        int ans=-1;
        while(r>l){
            int mid=l+(r-l)/2;
            if(target>nums[mid]){
                l=mid+1;
            }
            else if(target==nums[mid]){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid;
            }
            
        }
        return ans;
        
    }
    
     int bin2(vector<int>nums,int target){
        int l=0,r=nums.size()-1;
        int ans=-1;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans(2,-1);
        ans[1]=bin1(nums,target);
        ans[0]=bin2(nums,target);
        return ans;
        
    }
};