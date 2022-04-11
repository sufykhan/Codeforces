class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int curr=INT_MIN;
        int tot=0;
        for(int i=0;i<nums.size();i++){
            curr=max(curr,nums[i]);
            if(tot+nums[i]<0){
                tot=0;
            }
            else{
                tot+=nums[i];
                maxi=max(tot,maxi);
            }
        }
        
        return max(maxi,curr);
    }
};