class Solution {
public:
    
    int recur(int left,int right,vector<int>&nums){
        
        if(left>right) return INT_MIN;
        
        int mid=left+(-left+right)/2;
        int maxL=0;
        int maxR=0;
        int sum=0;
        for(int i=mid-1;i>=left;i--){
            sum+=nums[i];
            maxL=max(maxL,sum);
        }
        sum=0;
        for(int i=mid+1;i<=right;i++){
            sum+=nums[i];
            maxR=max(maxR,sum);
        }
        int tot=maxL+maxR+nums[mid];
        
        int lefti=recur(left,mid-1,nums);
        int righti=recur(mid+1,right,nums);
        
        return max({tot,lefti,righti});
    }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        return recur(0,n-1,nums);
    }
};