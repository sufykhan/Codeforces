class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach=nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(maxReach == 0) return 0;
            maxReach--;
            if(nums[i] > maxReach) maxReach = nums[i];
        }
        return 1;
        
    }
};