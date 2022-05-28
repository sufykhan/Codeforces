class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^nums[i]^i;
        }
        ans=ans^n;
        return ans;
    }
};