class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int i=0,j=nums.size()-1,ans=0;
        
        sort(nums.begin(),nums.end());
        
        
        while(j>i){
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                ans++;
            }
            else if(nums[i]+nums[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        
        return ans;
    }
};