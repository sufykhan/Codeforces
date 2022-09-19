class Solution {
public:
    int binSearch(vector<int>&nums,int target,int l,int r){
        while(r>=l){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=-1;
        int l=0,r=nums.size()-1;
        while(r>l){
            int mid=l+(r-l)/2;
            if(mid+1!=nums.size() && nums[mid]>nums[mid+1]){
                pivot=mid;
                break;
            }
            else if(nums[r]>nums[mid]){
                r=mid;
            }
            else{
                l=mid;
            }
        }
       
        int ans1=binSearch(nums,target,0,pivot);
        if(ans1!=-1) return ans1;
        int ans2=binSearch(nums,target,pivot+1,nums.size()-1);
        if(ans2!=-1) return ans2;
        return -1;
        
    }
};