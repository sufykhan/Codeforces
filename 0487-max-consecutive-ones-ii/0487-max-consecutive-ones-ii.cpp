class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r=0,l=0,maxi=0,n=nums.size(),tot=0;
        
        while(r<n){
           if(nums[r]==0) tot++;
            
           while(tot==2){
               if(nums[l]==0) tot--;
               l++;
           }
           maxi=max(maxi,r-l+1);
           r++;
        }
        
        return maxi;
    }
};