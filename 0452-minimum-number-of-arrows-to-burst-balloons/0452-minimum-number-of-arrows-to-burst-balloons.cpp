class Solution {
public:
    static bool compar(vector<int>&a,vector<int>&b){
        if(b[1]==a[1]){
            return a[0]>b[0];
        }
        return b[1]>a[1];
    }
    int findMinArrowShots(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),compar);
        int ans=1,left=nums[0][0],right=nums[0][1];
        for(int i=1;i<nums.size();i++)
        {
            if(right>=nums[i][0]){
                right=min(right,nums[i][1]);
                left=max(left,nums[i][0]);
            }
            else{
                ans++;
                left=nums[i][0];
                right=nums[i][1];
            }
        }
        return ans;
    }
};