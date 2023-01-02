class Solution {
public:
    int give(vector<int>nums){
        int dp1=0;
        int dp2=nums.back();
        for(int i=nums.size()-2;i>=0;i--){
            int curr=max(dp1+nums[i],dp2);
            dp1=dp2;
            dp2=curr;
        }
        return dp2;
    }
    int rob(vector<int>& nums) {
        
        if(nums.size()==1) return nums.back();
        vector<int>nums1=nums;
        nums1.pop_back();
        vector<int>nums2={};
        for(int i=1;i<nums.size();i++){
            nums2.push_back(nums[i]);
        }
        
        return max(give(nums1),give(nums2));
    }
};