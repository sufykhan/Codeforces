class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int l=INT_MAX,r=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            if(maxi>nums[i]){
                
                int j=i-1;
                while(j>=0 && nums[i]<nums[j]){
                    j--;
                }
                l=min(l,j+1);
                r=max(r,i);
            }
            else{
                maxi=nums[i];
            }
            
        }
        if(l==INT_MAX && r==INT_MIN){
            return 0;
        }
        return r-l+1;
        
    }
};