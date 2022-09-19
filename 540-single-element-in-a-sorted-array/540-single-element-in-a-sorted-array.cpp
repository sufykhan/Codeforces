class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // 1 1 2 3 3 4 4 8 8
        // 0 1 2 3 4 5 6 7 8    
        int l=0,r=nums.size()-2;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(mid%2==0){
                if(nums[mid]!=nums[mid+1]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        return nums[l];
    }
};